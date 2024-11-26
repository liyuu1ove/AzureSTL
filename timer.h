#pragma once 
#include <chrono>
#include <iostream>


class Timer{
private:
    std::chrono::_V2::system_clock::time_point start;
    std::chrono::duration<float> duration;
public:
    Timer()
    :start(std::chrono::high_resolution_clock::now())
    {
    }
    ~Timer(){
        std::chrono::_V2::system_clock::time_point stop = std::chrono::high_resolution_clock::now();
        duration=stop-start;
        std::cout << duration << std::endl;
    }
};