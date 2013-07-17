/*
 * SkypeLicenseListAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef SKYPELICENSELISTACTION_H_
#define SKYPELICENSELISTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The SkypeLicenseListAction lists all Skype for Asterisk licenses currently installed on
     * the system.<p>
     * For each license a SkypeLicenseEvent is generated. After all licenses have been
     * reported a SkypeLicenseListCompleteEvent is generated.<p>
     * Available with Skype for Asterisk.
     *
     * @see org.asteriskjava.manager.event.SkypeLicenseEvent
     * @see org.asteriskjava.manager.event.SkypeLicenseListCompleteEvent
     * @since 1.0.0
     */

    class SkypeLicenseListAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new SkypeLicenseListAction.
         */
        SkypeLicenseListAction();

        virtual ~SkypeLicenseListAction();

    };

} //NAMESPACE

#endif /*SKYPELICENSELISTACTION_H_*/
