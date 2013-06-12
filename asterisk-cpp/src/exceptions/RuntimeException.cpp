/************************************
 * Package: RGcpp					*
 * Authors: Rui Eduardo Gouveia Gil	*
 * Date: 2010						*
 ************************************/
#include "asteriskcpp/exceptions/RuntimeException.h"

namespace asteriskcpp {

    RuntimeException::RuntimeException(const std::string& message) :
    Exception("RuntimeException", message) {

    }

    RuntimeException::RuntimeException(const std::string& name, const std::string& message) :
    Exception(name, message) {

    }

    ArithmeticException::ArithmeticException(const std::string& message) :
    RuntimeException("ArithmeticException", message) {

    }

    ArrayStoreException::ArrayStoreException(const std::string& message) :
    RuntimeException("ArrayStoreException", message) {

    }

    BufferOverflowException::BufferOverflowException(const std::string& message) :
    RuntimeException("BufferOverflowException", message) {

    }

    BufferUnderflowException::BufferUnderflowException(const std::string& message) :
    RuntimeException("BufferUnderflowException", message) {

    }

    ClassCastException::ClassCastException(const std::string& message) :
    RuntimeException("ClassCastException", message) {

    }

    DOMException::DOMException(const std::string& message) :
    RuntimeException("DOMException", message) {

    }

    EmptyStackException::EmptyStackException(const std::string& message) :
    RuntimeException("EmptyStackException", message) {

    }

    IllegalArgumentException::IllegalArgumentException(const std::string& message) :
    RuntimeException("IllegalArgumentException", message) {

    }

    IllegalStateException::IllegalStateException(const std::string& message) :
    RuntimeException("IllegalStateException", message) {

    }

    IndexOutOfBoundsException::IndexOutOfBoundsException(const std::string& message) :
    RuntimeException("IndexOutOfBoundsException", message) {

    }

    MissingResourceException::MissingResourceException(const std::string& message) :
    RuntimeException("MissingResourceException", message) {

    }

    NoSuchElementException::NoSuchElementException(const std::string& message) :
    RuntimeException("NoSuchElementException", message) {

    }

    NoMoreElementsException::NoMoreElementsException(const std::string& message) :
    RuntimeException("NoMoreElementsException", message) {

    }

    NullPointerException::NullPointerException(const std::string& message) :
    RuntimeException("NullPointerException", message) {

    }

    SecurityException::SecurityException(const std::string& message) :
    RuntimeException("SecurityException", message) {

    }

    SystemException::SystemException(const std::string& message) :
    RuntimeException("SystemException", message) {

    }

    UnsupportedOperationException::UnsupportedOperationException(const std::string& message) :
    RuntimeException("UnsupportedOperationException", message) {

    }

    ConfigException::ConfigException(const std::string& message) :
    RuntimeException("ConfigException", message) {

    }

    SQLException::SQLException(const std::string& message) :
    Exception("SQLException", message) {

    }

    ZIPException::ZIPException(const std::string& message) :
    Exception("ZIPException", message) {

    }

}
