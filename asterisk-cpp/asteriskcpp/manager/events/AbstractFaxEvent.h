/*
 * AbstractFaxEvent.h
 *
 *  Created on: Aug 10, 2011
 *      Author: a-campos
 */

#ifndef ABSTRACTFAXEVENT_H_
#define ABSTRACTFAXEVENT_H_

#include "asteriskcpp/manager/events/ManagerEvent.h"

namespace asteriskcpp {

    /**
     * An AbstractFaxEvent is a base class for fax related events
     */
    class AbstractFaxEvent : public ManagerEvent {
    public:
        AbstractFaxEvent(const std::string& values);
        virtual ~AbstractFaxEvent();

        /**
         * @return the channel
         */
        const std::string& getChannelType() const;

        /**
         * @return the faxSession
         */

        int getFaxSession() const;
    };

}
#endif /* ABSTRACTFAXEVENT_H_ */
