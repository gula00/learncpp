#include <iostream>
#include "threadpool.h"

using namespace std;

ThreadPool:: ThreadPool(int min, int max) : m_maxThread(max), m_minThread(min),
m_stop(false), m_idleThread(min), m_curThread(min)
{
    m_manager = new thread(&ThreadPool::manager, this);
    // working thread
    for (int i = 0; i < min; i++) {
        // push_back 会引起 copy
        m_workers.emplace_back(thread(&ThreadPool::worker, this));
    }
}

ThreadPool::~ThreadPool() {}

void ThreadPool::addTask(function<void(void)> task)
{
    {
        lock_guard<mutex> locker(m_queueMutex);
        m_tasks.emplace(task);
    }
    m_condition.notify_one();
}

int main()
{
    std::cout << std::thread::hardware_concurrency() << '\n' << std::endl;
}
