//
// Created by mykola on 22.04.24.
//

#ifndef COUNTWORDS_PAR_PROFTOOLS_TIME_MEASURE_H
#define COUNTWORDS_PAR_PROFTOOLS_TIME_MEASURE_H

#include <chrono>
#include <atomic>

inline std::chrono::high_resolution_clock::time_point
get_current_time_fenced()
{
    std::atomic_thread_fence(std::memory_order_seq_cst);
    auto res_time = std::chrono::high_resolution_clock::now();
    std::atomic_thread_fence(std::memory_order_seq_cst);
    return res_time;
}

template<class D>
inline long long to_ms(const D& d)
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(d).count();
}

#endif //COUNTWORDS_PAR_PROFTOOLS_TIME_MEASURE_H
