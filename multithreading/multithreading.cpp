#include "multithreading.h"

threadingClass::threadingClass()
{
    futureObj = resultPromise.get_future();
    returnValue = 0;
}

threadingClass::~threadingClass()
{}

void threadingClass::callIndefiniteLoop()
{
    std::cout << "starting indefinite loop with resultValue: " << this->returnValue << std::endl;

    //starting additional thread with lambda expression referencing parameters
    additionalThread = std::thread([&]{this->workingThreadMethod(&resultPromise);});

    //loop until additionalThread returned a value
    while (true)
    {
        //if (futureObj.valid())
        if (futureObj.wait_for(std::chrono::milliseconds(1)) != std::future_status::timeout)
        {
            this->returnValue = futureObj.get();
            break;
        }
        std::cout << "looping" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }

    additionalThread.join();
    std::cout << "got workingThread result: " << this->returnValue << std::endl;

    return;
}

void threadingClass::workingThreadMethod(std::promise<int>* promiseObj)
{
    std::this_thread::sleep_for(std::chrono::seconds(2));

    promiseObj->set_value(10);

    std::cout << "workingThread finished" << std::endl;

    return;
}

int main(int argc, char** argv)
{
    threadingClass testObj;

    testObj.callIndefiniteLoop();

    return 0;
}