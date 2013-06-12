/************************************
 * Package: RGcpp					*
 * Authors: Rui Eduardo Gouveia Gil	*
 * Date: 2010						*
 ************************************/
#ifndef __RGCPP_SQLEXCEPTION_H__
#define __RGCPP_SQLEXCEPTION_H__

#include "Exception.h"

namespace asteriskcpp {

    class RuntimeException : public Exception {
    public:
        RuntimeException(const std::string& message);

    protected:
        RuntimeException(const std::string& name, const std::string& message);
    };

    class ArithmeticException : public RuntimeException {
    public:
        ArithmeticException(const std::string& message);
    };

    class ArrayStoreException : public RuntimeException {
    public:
        ArrayStoreException(const std::string& message);
    };

    class BufferOverflowException : public RuntimeException {
    public:
        BufferOverflowException(const std::string& message);
    };

    class BufferUnderflowException : public RuntimeException {
    public:
        BufferUnderflowException(const std::string& message);
    };

    class ClassCastException : public RuntimeException {
    public:
        ClassCastException(const std::string& message);
    };

    class DOMException : public RuntimeException {
    public:
        DOMException(const std::string& message);
    };

    class EmptyStackException : public RuntimeException {
    public:
        EmptyStackException(const std::string& message);
    };

    class IllegalArgumentException : public RuntimeException {
    public:
        IllegalArgumentException(const std::string& message);
    };

    class IllegalStateException : public RuntimeException {
    public:
        IllegalStateException(const std::string& message);
    };

    class IndexOutOfBoundsException : public RuntimeException {
    public:
        IndexOutOfBoundsException(const std::string& message);
    };

    class MissingResourceException : public RuntimeException {
    public:
        MissingResourceException(const std::string& message);
    };

    class NoSuchElementException : public RuntimeException {
    public:
        NoSuchElementException(const std::string& message);
    };

    class NoMoreElementsException : public RuntimeException {
    public:
        NoMoreElementsException(const std::string& message);
    };

    class NullPointerException : public RuntimeException {
    public:
        NullPointerException(const std::string& message);
    };

    class SecurityException : public RuntimeException {
    public:
        SecurityException(const std::string& message);
    };

    class SystemException : public RuntimeException {
    public:
        SystemException(const std::string& message);
    };

    class UnsupportedOperationException : public RuntimeException {
    public:
        UnsupportedOperationException(const std::string& message);
    };

    class ConfigException : public RuntimeException {
    public:
        ConfigException(const std::string& message);
    };

    class SQLException : public Exception {
    public:
        SQLException(const std::string& message);
    };

    class ZIPException : public Exception {
    public:
        ZIPException(const std::string& message);
    };

}

#endif
