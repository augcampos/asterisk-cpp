/*
 * ShowDialplanCompleteEvent.h
 *
 *  Created on: May 2, 2012
 *      Author: augcampos
 */

#ifndef SHOWDIALPLANCOMPLETEEVENT_H_
#define SHOWDIALPLANCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

    /**
     * A ShowDialplanCompleteEvent is triggered after the dialplan has been reported
     * in response to a ShowDialplanAction.<p>
     * Available since Asterisk 1.6<p>
     * It is implemented in <code>main/pbx.c</code>
     *
     * @see org.asteriskjava.manager.action.ShowDialplanAction
     * @see org.asteriskjava.manager.event.ListDialplanEvent
     * @since 1.0.0
     */
    class ShowDialplanCompleteEvent : public ResponseEvent {
    public:
        ShowDialplanCompleteEvent(const std::string & values);
        virtual ~ShowDialplanCompleteEvent();

        /**
         * Returns the total number of list items reported.
         *
         * @return the total number of list items reported.
         */
        int getListItems() const;

        /**
         * Returns the number of extensions reported.
         *
         * @return the number of extensions reported.
         */
        int getListExtensions() const;

        /**
         * Returns the number of priorites reported.
         *
         * @return the number of priorites reported.
         */
        int getListPriorities() const;

        /**
         * Returns the number of contexts reported.
         *
         * @return the number of contexts reported.
         */
        int getListContexts() const;
    };

} /* namespace asteriskcpp */
#endif /* SHOWDIALPLANCOMPLETEEVENT_H_ */
