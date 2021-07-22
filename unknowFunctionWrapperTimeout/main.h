#pragma once

#include <iostream>
#include <functional>
#include <utility>
#include <thread>
#include <vector>
#include <unistd.h>
#include <mutex>
#include <chrono>


class Application{
public:

    ~Application();

    int run();

    void myFunc();
    void myFunc2(int);
    std::string myFunc3(int a, int b);
};



namespace HM {

class ThresholdTimer{
public:
    ThresholdTimer(std::chrono::duration<double> threshold){
        this->thresholdDuration_ = threshold;
        this->resetTimer();
    }
    void resetTimer(){
        this->lastResetTime_ = std::chrono::steady_clock::now();
    }
    bool tick()
    {
        bool timeoutHappened = false;
        auto elapsedTimeSinceReset = std::chrono::steady_clock::now() - this->lastResetTime_;
        if(elapsedTimeSinceReset > this->thresholdDuration_){
            this->resetTimer();
            timeoutHappened = true;
        }
        return timeoutHappened;
    }

private:
    std::chrono::time_point<std::chrono::steady_clock> lastResetTime_;
    std::chrono::duration<double> thresholdDuration_;
};

/// pure virtual base class used for pointer access without template knowledge
class ThresholdCallback
{
public:
    //ThresholdCallback(){}
    virtual ~ThresholdCallback(){}
    virtual ThresholdTimer& getTimer() = 0;
    virtual std::string& getId() = 0;
};

/// see
/// http://www.cplusplus.com/forum/general/120728/
template <template<typename, typename...> typename BindT, typename RetT, typename ...Args>
class ThresholdCallbackImpl : public ThresholdCallback{
typedef  BindT<RetT (Args...)> CallbackF_T;

public:
    ThresholdCallbackImpl(std::string& id, std::chrono::duration<double> threshold, CallbackF_T& func) : timer_(threshold){
        this->id_ = id;
        this->user_callback_ = func;
        std::cout << "ThreasholdCallback Constructor [" << this->id_ << "]\n";
    }
    ~ThresholdCallbackImpl(){
    }
public:

    CallbackF_T getWrapper()
    {
        /// from:
        /// https://stackoverflow.com/questions/30559376/c-bind-member-function-with-variadic-template
        ///
        /// we create a lambda function (derived from the templated ArgumentPack given)
        /// as a wrapper for the <wrapped_cb> function with its variadic argument template
        /// so that we can call that <wrapped_cb> without knowing those function arguments explicitly
        ///
        /// this has to happen because we cannot use:
        ///      std::bind(&ThresholdCallbackImpl::wrapped_cb, this, _1, _2, ...);
        /// in that way ...
        /// The reason for this is that we cannot bind placeholder arguments of variadic parameter packs
        /// because we d not now how to many arguments are in there and bind does not allow
        /// group placeholders for variadic parameter packs (AT THE MOMENT)
        ///     see:
        ///     http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4171.html
        ///
        /// I am very sorry for this [Nick Fiege]:
        ///     this is magic ...
        ///     i dont know how to explain it ...
        ///     i dont know how to verify it ...
        ///     but it works right now?!
        CallbackF_T f = [this](Args... args){return (this->wrapped_cb)(args...);};
        return f;
    }

    ThresholdTimer& getTimer(){
        return this->timer_;
    }
    std::string& getId(){
        return this->id_;
    }

private:
    RetT wrapped_cb(Args... args){
        std::cout << "wrapped_cb [" << this->getId() << "]\n";
        this->getTimer().resetTimer();
        return this->user_callback_(args...);
    }

private:
    // do we want to use mutex here?
    // can we afford to block timer functionality if main user function blocks?
    //std::mutex mutex_;
    std::string id_;
    ThresholdTimer timer_;
    CallbackF_T user_callback_;
};



// this could be a normal call by user
//    auto newFF = HM::ThresholdCallbackFactory::create(1000000us, std::function<void(int)>(std::bind(&Application::myFunc2, this, std::placeholders::_1) ));
std::string parseFunctionIdFromBindCall( char const* str){
    std::string inputStr = std::string(str);
    std::string delimiter1("::bind(");
    std::string delimiter2(",");
    std::string result;
    try {
        std::string s1 = inputStr.substr(inputStr.find(delimiter1) + delimiter1.size());
        result = s1.substr(0, s1.find(delimiter2));
    } catch (std::out_of_range) {
        std::cout << "parseFnameFromBindCall failed to extract function name from bind call (via CREATE_TRESHOLD_WRAPPER macro)";
    }
    return std::string(result);
}
#define STS_CREATE_TRESHOLD_CALLBACK_WRAPPER(TRESHOLD, BIND) HM::ThresholdCallbackFactory::create( TRESHOLD, BIND, HM::parseFunctionIdFromBindCall(#BIND) )

class ThresholdCallbackFactory
{
private:
    static ThresholdCallbackFactory* FACTORY_SINGLETON_PTR_;

private:
    ThresholdCallbackFactory() : thread_dt_(std::chrono::milliseconds(200)){
        std::cout << "Constructor Factory\n";
        this->threadEnable_ = true;
        this->timerThread_ = std::thread(std::bind(&ThresholdCallbackFactory::timerFunc_, this));
    }
    ~ThresholdCallbackFactory()
    {
        std::cout << "Destructor Factory\n";
        this->threadMutex_.lock();
        this->threadEnable_ = false;
        this->threadMutex_.unlock();
        this->timerThread_.join();
        for(auto tc : ThresholdCallbackFactory::callbacks_){
            std::cout << " ----- ";
            delete tc;
        }
    }
public:
    static void destroy(){
        delete ThresholdCallbackFactory::FACTORY_SINGLETON_PTR_;
    }

    /*!
    * Create Wrapped function whith its own watchdog timer
    * @param treshold - The threshold in seconds for the timer before timeout
    * @param func - The function provided which shall be wrapped
    * @return Function handle for wrapped (watchdog) function which should be used further
    */
    /*
     * old function had static BindType (BindT) for std::bind<ReturnType (ArgumentPack...)>
     * new way represents that as BindT template type via:
     *  template<typenamen[ReturnType] typename...[ArgumentPack]>typename [which should be called] BindT
     */
    template <template<typename, typename...> typename BindT, typename RetT, typename ...Args>
    static BindT<RetT (Args...)> create(std::chrono::duration<double> threshold, BindT<RetT (Args...)> func, std::string fname = std::string()){
        if(ThresholdCallbackFactory::FACTORY_SINGLETON_PTR_ == nullptr)
            ThresholdCallbackFactory::FACTORY_SINGLETON_PTR_ = new ThresholdCallbackFactory();
        return FACTORY_SINGLETON_PTR_->create_(threshold, func, fname);
    }

private:
    template <template<typename, typename...> typename BindT, typename RetT, typename ...Args>
    BindT<RetT (Args...)> create_(std::chrono::duration<double> threshold, BindT<RetT (Args...)> func, std::string fname){
        //std::string id(func.target_type().name());  // results in symbol name of the function
        //std::string id(std::to_string());
        std::string id;
        if(!fname.empty())
            id = fname;
        else
            id = std::to_string(this->callbacks_.size());
        ThresholdCallbackImpl<BindT, RetT, Args...>* tc = new ThresholdCallbackImpl<BindT, RetT, Args...>(id, threshold, func);
        this->callbacks_.push_back(std::move(tc));
        return tc->getWrapper();
    }

    void timerFunc_(){
        std::cout << "Timer Func Start\n";
        while(this->threadEnable_)
        {
            threadMutex_.lock();
            // tick all timers and check if they resulted in a timeout
            for(auto callback : this->callbacks_){
                bool timeoutHappened = callback->getTimer().tick();
                if(timeoutHappened){
                    // call user function for timeout
                    // or
                    // do whatever
                    std::cout << "TIMEOUT! [" << callback->getId() << "]\n";
                }
            }
            threadMutex_.unlock();
            // sleep again for dt to calm down the thread
            std::this_thread::sleep_for(this->thread_dt_);
        }
        std::cout << "Timer Func End\n";
    }


private:
    std::mutex threadMutex_;
    std::vector<ThresholdCallback*> callbacks_;
    std::thread timerThread_;
    std::chrono::duration<double> thread_dt_;
    bool threadEnable_;
};
ThresholdCallbackFactory* ThresholdCallbackFactory::FACTORY_SINGLETON_PTR_ = nullptr;

}
