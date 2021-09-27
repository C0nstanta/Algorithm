#ifndef TIMER_H
#define TIMER_H

#include <chrono>


class Timer
{
public:
    Timer();

    void start();
    void stop();
    double elapsed_time();
    double elapsed_seconds();


private:
    std::chrono::time_point<std::chrono::system_clock> start_time_;
    std::chrono::time_point<std::chrono::system_clock> end_time_;
    bool is_running = false;
};

#endif // TIMER_H
