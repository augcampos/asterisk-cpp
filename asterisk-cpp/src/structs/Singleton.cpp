/*
 * Singleton.cpp
 *
 *  Created on: 29 de Jun de 2011
 *      Author: augcampos
 */

#include "asteriskcpp/structs/Singleton.h"

namespace asteriskcpp {

	NonCopyable::NonCopyable() {
	}

	NonCopyable::NonCopyable(const NonCopyable& c_dmn) {
	}

	const NonCopyable& NonCopyable::operator=(const NonCopyable& c_dmn) {
		return (*this);
	}

}
