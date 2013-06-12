/*
 * SkypeLicenseEvent.h
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#ifndef SKYPELICENSEEVENT_H_
#define SKYPELICENSEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A SkypeLicenseEvent is triggered in response to a SkypeLicenseListAction for each
     * license installed on the system.<p>
     * It is implemented in <code>chan_skype.c</code>.<p>
     * Available with Skype for Asterisk.
     *
     * @see org.asteriskjava.manager.action.SkypeLicenseListAction
     * @since 1.0.0
     */
    class SkypeLicenseEvent : public ResponseEvent {
    public:
        SkypeLicenseEvent(const std::string & values);
        virtual ~SkypeLicenseEvent();

        /**
         * Returns the name of the file this license is stored in.
         *
         * @return the name of the file this license is stored in.
         */
        const std::string& getFile() const;

        /**
         * Returns the license key.
         *
         * @return the license key.
         */
        const std::string& getKey() const;

        /**
         * Returns the date the license expires in the format "YYYY-MM-DD".
         *
         * @return the date the license expires in the format "YYYY-MM-DD".
         */
        const std::string& getExpires() const;

        const std::string& getHostId() const;

        /**
         * Returns the number of licensed channels.
         *
         * @return the number of licensed channels.
         */
        int getChannels() const;

        const std::string& getStatus() const;
    };

} /* namespace asteriskcpp */
#endif /* SKYPELICENSEEVENT_H_ */
