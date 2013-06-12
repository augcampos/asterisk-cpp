/*
 * Singleton.h
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <pthread.h>
#include <boost/thread.hpp>

namespace asteriskcpp {

    class NonCopyable {
    protected:
        NonCopyable();
        NonCopyable(const NonCopyable&);

        const NonCopyable& operator=(const NonCopyable&);
    };

    template<class C>
    class Singleton : public NonCopyable {
    public:

        static boost::shared_ptr<C> getInstance() {
            boost::recursive_mutex::scoped_lock cLock(m_mutexGetSingleton);
            C* pc;
            if (m_pInstance.get() == 0) {
                pc = new C;
                m_pInstance.reset(pc);
            }
            return (m_pInstance);
        }

        static void killInstance() {
            boost::recursive_mutex::scoped_lock cLock(m_mutexGetSingleton);
            m_pInstance.reset();
        }

        template<typename T> static boost::shared_ptr<C> getInstance(T& c_arg) {
            boost::recursive_mutex::scoped_lock cLock(m_mutexGetSingleton);
            C* pc;

            if (m_pInstance.get() == 0) {
                pc = new C(c_arg);
                m_pInstance.reset(pc);
            }

            return (m_pInstance);
        }

        template<typename T1, typename T2> static boost::shared_ptr<C> getInstance(T1& c_arg1, T2& c_arg2) {
            boost::recursive_mutex::scoped_lock cLock(m_mutexGetSingleton);
            C* pc;

            if (m_pInstance.get() == 0) {
                pc = new C(c_arg1, c_arg2);
                m_pInstance.reset(pc);
            }

            return (m_pInstance);
        }

        template<typename T1, typename T2, typename T3> static boost::shared_ptr<C> getInstance(T1& c_arg1, T2& c_arg2, T3& c_arg3) {
            boost::recursive_mutex::scoped_lock cLock(m_mutexGetSingleton);
            C* pc;

            if (m_pInstance.get() == 0) {
                pc = new C(c_arg1, c_arg2, c_arg3);
                m_pInstance.reset(pc);
            }

            return (m_pInstance);
        }

        template<typename T1, typename T2, typename T3, typename T4> static boost::shared_ptr<C> getInstance(T1& c_arg1, T2& c_arg2, T3& c_arg3,
                T4& c_arg4) {
            boost::recursive_mutex::scoped_lock cLock(m_mutexGetSingleton);
            C* pc;

            if (m_pInstance.get() == 0) {
                pc = new C(c_arg1, c_arg2, c_arg3, c_arg4);
                m_pInstance.reset(pc);
            }

            return (m_pInstance);
        }

        template<typename T1, typename T2, typename T3, typename T4, typename T5> static boost::shared_ptr<C> getInstance(T1& c_arg1, T2& c_arg2,
                T3& c_arg3, T4& c_arg4, T5& c_arg5) {
            boost::recursive_mutex::scoped_lock cLock(m_mutexGetSingleton);
            C* pc;

            if (m_pInstance.get() == 0) {
                pc = new C(c_arg1, c_arg2, c_arg3, c_arg4, c_arg5);
                m_pInstance.reset(pc);
            }

            return (m_pInstance);
        }

    protected:

        Singleton() {
        }

        virtual ~Singleton() {
        }

    private:
        static boost::shared_ptr<C> m_pInstance;
        static boost::recursive_mutex m_mutexGetSingleton;
    };

    template<class C> boost::shared_ptr<C> Singleton<C>::m_pInstance;
    template<class C> boost::recursive_mutex Singleton<C>::m_mutexGetSingleton;

}

#endif /* SINGLETON_H_ */
