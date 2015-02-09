/*
 * EventBuilder.h
 *
 *  Created on: Jul 12, 2011
 *      Author: augcampos
 */

#ifndef EVENTBUILDER_H_
#define EVENTBUILDER_H_

#include <typeinfo>
#include "asteriskcpp/manager/events/ManagerEvent.h"
#include <boost/shared_ptr.hpp>
#include "asteriskcpp/utils/LogHandler.h"

namespace asteriskcpp {

    class EventFactory {
    public:

        virtual ~EventFactory() {
        }
        virtual ManagerEvent* create(const std::string& s) = 0;
    };

    template<class C>
    class factory : public EventFactory {
    public:

        ManagerEvent* create(const std::string& s) {
            return (new C(s));
        }
    };

    typedef std::map<const std::string, boost::shared_ptr<EventFactory> > EnventFactoryMapType;

    class EventBuilder {
    public:
        EventBuilder();
        virtual ~EventBuilder();

        template<class C>
        void RegisterClass() {
            //LOG_TRACE_DATA("REGISTER EVENT CLASS " << C::getEventName());
            C tmlEvent("");
            eventFactoryMap.insert(std::make_pair(tmlEvent.getEventName(), boost::shared_ptr<EventFactory>(new factory<C>())));
        }

        template<class C>
        void UnegisterClass() {
            C tmpEvent("");
            LOG_TRACE_STR("UNREGISTER EVENT CLASS " + tmpEvent.getEventName());
            EnventFactoryMapType::iterator it = eventFactoryMap.find(tmpEvent.getEventName());
            if (it != eventFactoryMap.end()) {
                eventFactoryMap.erase(it);
            }
            eventFactoryMap.insert(std::make_pair(tmpEvent.getEventName(), new factory<C>()));
        }

        ManagerEvent* buildEvent(const std::string& eventStr);
    private:
        EnventFactoryMapType eventFactoryMap;

    };

}

#endif /* EVENTBUILDER_H_ */
