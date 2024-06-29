/*
 * Test.cpp
 *
 *  Created on: Dec 30, 2011
 *      Author: augcampos
 */

//man 8 ldconfig (dont forget)

#include <iostream>
#include <asteriskcpp/Manager.hpp>
#include <asteriskcpp/manager/responses/ManagerError.h>


using namespace asteriskcpp;

void eventCallback(const ManagerEvent& me) {
    std::cout << "TEST EVENT START: " << me.getEventName() << std::endl;
    if (me.getEventName() == "NewChannel") {
        std::cout << "E - " << me.toString() << std::endl;
    }
    std::cout << "TEST EVENT: " << me.toLog() << std::endl;
}

int main() {
    std::cout << asteriskcpp::getCurrentTimeStamp() << " START ASTERISK-CPP-TEST" << std::endl;
    LogHandler::getInstance()->setLevel(LL_TRACE);

    ManagerConnection mc;

    try {
        mc.addEventCallback(&eventCallback);

        if (mc.connect("192.168.1.10")) {

            if (mc.login("administrator", "secret")) {

                for (int i = 0; i < 1; i++) {
                    asteriskcpp::EventsAction *ea = new asteriskcpp::EventsAction("OFF");
                    mc.sendAction(ea);
                    asteriskcpp::EventsAction *ea2 = new asteriskcpp::EventsAction("ON");
                    mc.sendAction(ea2);
                    asteriskcpp::ManagerResponse* rpc;

                    asteriskcpp::AbsoluteTimeoutAction ata("SIP/1000", 30);
                    rpc = mc.syncSendAction(ata);
                    delete (rpc);

                    asteriskcpp::ListCommandsAction lca;
                    rpc = mc.syncSendAction(lca);
                    delete (rpc);

                    asteriskcpp::CommandAction coma("sip show peers");
                    asteriskcpp::ManagerResponse* mr = mc.syncSendAction(coma);
                    if (mr->getType() == asteriskcpp::ManagerResponse::Type_ERROR) {
                        asteriskcpp::ManagerError *me = (asteriskcpp::ManagerError*)mr;
                        std::cout << std::endl << "XXXXXX" << me->toLog() << std::endl;
                    } else {
                        asteriskcpp::CommandResponse* cr = (asteriskcpp::CommandResponse*)mr;
                        std::cout << std::endl << "ZZZZZZ" << cr->toLog() << std::endl;
                        for (std::vector<std::string>::const_iterator it = cr->getResult().begin(); it != cr->getResult().end(); it++) {
                            std::cout << "[" << (*it) << "]" << std::endl;
                        }
                    }
                    delete mr;
                }
                mc.logoff();
            }
            mc.disconnect();
        }
    } catch (Exception e) {
        std::cout << " ERROR :" << e.getMessage() << std::endl;
    }
    std::cout << asteriskcpp::getCurrentTimeStamp() << " END ASTERISK-CPP-TEST" << std::endl;
    exit(0);
}
