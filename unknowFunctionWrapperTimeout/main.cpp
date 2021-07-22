#include <iostream>
#include <unistd.h>


#include "main.h"


#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <boost/bind/arg.hpp>

using namespace std;


Application::~Application(){
    HM::ThresholdCallbackFactory::destroy();
}


int Application::run()
{
    cout << "Hello World!" << endl;

    // original default call looks like this:
    auto newFMANUAL_NO_ID = HM::ThresholdCallbackFactory::create(1.0s, std::function<void()>(std::bind(&Application::myFunc, this)) );
    auto newFMANUAL_WITH_ID = HM::ThresholdCallbackFactory::create(1.0s, std::function<void()>(std::bind(&Application::myFunc, this)), "NickNackFunc()" );

    // better use the macro, so that your function name gets resolved automatically
    auto newF = STS_CREATE_TRESHOLD_CALLBACK_WRAPPER(1.0s, std::function<void()>(std::bind(&Application::myFunc, this)) );
    auto newFF = STS_CREATE_TRESHOLD_CALLBACK_WRAPPER(1000ms, std::function<void(int)>(std::bind(&Application::myFunc2, this, std::placeholders::_1)) );
    auto newFFF = STS_CREATE_TRESHOLD_CALLBACK_WRAPPER(1000000us, std::function<std::string(int,int)>(
                                                           std::bind(&Application::myFunc3, this, std::placeholders::_1, std::placeholders::_2)) );
    // we can use boost bindings aswell!
    // this is actually awesome ultra black magic which allows us to use
    // ros subscriber callbacks in the same way, for example:
    //      this->subscriber_ = this->getNodeHandle()->subscribe<const sensor_msgs::Temperature&>(this->subscriberTopic_, 1, newFFFBoost);
    // would be a valid wrapper declaration / usage
    auto newFFFBoost = STS_CREATE_TRESHOLD_CALLBACK_WRAPPER(1000000us, boost::function<std::string(int,int)>(
                                                           boost::bind(&Application::myFunc3, this, _1, _2)) );

    unsigned int count = 0;
    while(true){
        if(count > 25)
            break;
        usleep(400000);
        count++;

        if(count > 6 && count < 12){
            newF();
            newFMANUAL_NO_ID();
            newFMANUAL_WITH_ID();
        }

        if(count > 10 && count < 16){
            newFF(1337);
        }

        if(count > 14 && count < 20){
            newFFF(1337, 1338);
            newFFFBoost(200, 400);
        }
    }
    std::cout << "Bye!\n";
    return 0;
}

void Application::myFunc(){
    std::cout << ">>> myFunc!\n";
}
void Application::myFunc2(int a){
    std::cout << ">>> myFunc2! >> " << a << "\n";
}
std::string Application::myFunc3(int a, int b){
    std::string ret("XAXA LOLO");
    std::cout << ">>> myFunc3! >> " << a << " >> " << b << "[RETURN: " << ret << "]\n";
    return ret;
}

int main()
{
    Application app;
    int ret = app.run();
    std::cout << "DONE.\n";
    return ret;
}
