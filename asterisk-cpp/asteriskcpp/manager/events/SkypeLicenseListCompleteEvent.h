/*
 * SkypeLicenseListCompleteEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef SKYPELICENSELISTCOMPLETEEVENT_H_
#define SKYPELICENSELISTCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A SkypeLicenseListCompleteEvent is triggered in response to a SkypeLicenseListAction when
     * all licenses have been reported.<p>
     * It is implemented in <code>chan_skype.c</code>.<p>
     * Available with Skype for Asterisk.
     *
     * @see org.asteriskjava.manager.action.SkypeLicenseListAction
     * @since 1.0.0
     */
    class SkypeLicenseListCompleteEvent : public asteriskcpp::ResponseEvent {
    public:
        SkypeLicenseListCompleteEvent(const std::string & values);
        virtual ~SkypeLicenseListCompleteEvent();
    };

} /* namespace asteriskcpp */
#endif /* SKYPELICENSELISTCOMPLETEEVENT_H_ */
