
#include "asteriskcpp/manager/Dispatcher.h"
#include "asteriskcpp/utils/LogHandler.h"

namespace asteriskcpp {

    MessageTable::~MessageTable() {
        boost::mutex::scoped_lock lock(this->mutex);
        this->condition.notify_all();
    }

    void MessageTable::put(std::string message) {
        boost::mutex::scoped_lock lock(this->mutex);
        try {
            this->messageQueue.push(message);
        } catch (std::bad_alloc& e) {
            LOG_ERROR_STR("catch bad_alloc.");
        }
        this->condition.notify_all();
    }

    std::string MessageTable::take() {
        boost::mutex::scoped_lock lock(this->mutex);

        while (this->messageQueue.size() <= 0) {
            this->condition.wait(lock);
        }

        std::string message = this->messageQueue.front();
        this->messageQueue.pop();
        this->condition.notify_all();

        return message;
    }


    DispatchThread::DispatchThread(MessageTable* mt, Dispatcher* d)
        : messageTable(mt), dispatcher(d)
    {
    }

    DispatchThread::~DispatchThread() {
    }

    void DispatchThread::stop() {
        if (!Thread::isStoped()) {
            Thread::stop();
        }
    }

    void DispatchThread::run() {
        static int LOOP_INTERVAL = 10;
        boost::posix_time::milliseconds duration(LOOP_INTERVAL);
        boost::this_thread::sleep<boost::posix_time::milliseconds>(duration);
        {
            //boost::this_thread::disable_interruption di;
            {
                std::string message = this->messageTable->take();
                this->fireDispatch(message);
            }
        }
    }
}
