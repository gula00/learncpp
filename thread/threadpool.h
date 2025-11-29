#pragma once
#include <thread>
#include <mutex>
#include <vector>
#include <queue>
#include <atomic>
#include <functional>
#include <condition_variable>
#include <map>
#include <future>

using namespace std;

class ThreadPool {
    public:
        ThreadPool(int min = 4, int max = thread::hardware_concurrency());
        ~ThreadPool();

        void addTask(function<void(void)> task);

    private:
        void manager(void);
        void worker(void);
    private:
        thread* m_manager;
        vector<thread> m_workers;
        atomic<int> m_minThread;
        atomic<int> m_maxThread;
        atomic<int> m_curThread;
        atomic<int> m_idleThread;
        atomic<bool> m_stop;
        queue<function<void(void)>> m_tasks;
        mutex m_queueMutex;
        condition_variable m_condition;
};
