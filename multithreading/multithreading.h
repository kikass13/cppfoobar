#pragma once
#include <future>
#include <thread>
#include <chrono>
#include <iostream>

class threadingClass
{
public:
    threadingClass();

    ~threadingClass();

    void callIndefiniteLoop();

    void workingThreadMethod(std::promise<int>* promiseObj);

private:
    int returnValue;

    std::promise<int> resultPromise;
    std::future<int> futureObj;
    std::thread additionalThread;
};