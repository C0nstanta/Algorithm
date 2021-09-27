#include "timer.h"

Timer::Timer() {}

void Timer::start()
{
    start_time_ = std::chrono::system_clock::now();
    is_running = true;
}


void Timer::stop()
{
    end_time_ = std::chrono::system_clock::now();
    is_running = false;
}


double Timer::elapsed_time()
{
    std::chrono::time_point<std::chrono::system_clock> end_time_tmp;

    if(is_running)
    {
        end_time_tmp = std::chrono::system_clock::now();
    }
    else
    {
        end_time_tmp = end_time_;
    }
    return std::chrono::duration_cast<std::chrono::milliseconds>(end_time_tmp - start_time_).count();
}


double Timer::elapsed_seconds()
{
    return elapsed_time() / 1000.0;
}
