/*
 * AsyncAgiEvent.h
 *
 *  Created on: Aug 4, 2011
 *      Author: a-campos
 */

#ifndef ASYNCAGIEVENT_H_
#define ASYNCAGIEVENT_H_

#include "asteriskcpp/manager/events/ResponseEvent.h"
#include "vector"

namespace asteriskcpp {

    /**
     *
     * The following sub events are reported:
     * <ul>
     * <li>Start: A channel has started the AGI("agi:async") application and is awaiting Async AGI commands.</li>
     * <li>Exec:  Execution of an AGI command initiated through {@link org.asteriskjava.manager.action.AgiAction} has finished.</li>
     * <li>End:   A channel has left the AGI("agi:async") application.</li>
     * </ul>
     * It is implemented in <code>res/res_agi.c</code>.
     * <p/>
     * Available since Asterisk 1.6
     *
     * @see org.asteriskjava.manager.action.AgiAction
     * @since 1.0.0
     */
    class AsyncAgiEvent : public ResponseEvent {
    public:
        AsyncAgiEvent(const std::string & values);
        virtual ~AsyncAgiEvent();

        /**
         * Returns the name of the channel this event occurred on.
         *
         * @return the name of the channel this event occurred on.
         */
        const std::string& getChannel() const;

        /**
         * Returns the sub event type. This is either "Start", "Exec" or "End".
         *
         * @return the sub event type.
         */
        const std::string& getSubEvent() const;

        /**
         * Returns the command id of the corresponding {@link org.asteriskjava.manager.action.AgiAction}.<p>
         * This property is only available for the "Exec" sub event.
         *
         * @return the command id.
         * @see org.asteriskjava.manager.action.AgiAction#setCommandId(String)
         */
        const std::string& getCommandId() const;

        /**
         * Returns the raw result of a command execution in response to the corresponding
         * {@link org.asteriskjava.manager.action.AgiAction}.<p>
         * This property is only available for the "Exec" sub event.<p>
         * The result is URL encoded and ends with a newline ("\n").<p>
         * Example:
         * <pre>
         * 200%20result%3d0
         * </pre>
         *
         * @return the URL encoded result.
         */
        const std::string& getResult() const;

        /**
         * Decodes the result.
         *
         * @return the decoded result.
         */
        std::vector<std::string> decodeResult();

        /**
         * Returns the raw AGI environment similar to the AGI request for FastAGI.<p>
         * This property is only available for the "Start" sub event.<p>
         * The environment is passed in multiple lines (separated by "\n"). Each line is URL encoded
         * and contains a key and a value. The environment ends with two newline characters ("\n\n").<p>
         * Example:
         * <pre>
         * ...
         * agi_channel%3a%20IAX2%2fpbx0-1
         * agi_language%3a%20de
         * agi_type%3a%20IAX2
         * agi_uniqueid%3a%201201838738.19
         * agi_version%3a%201.6.0-beta1
         * ...
         * </pre>
         *
         * @return the URL encoded AGI environment.
         */
        const std::string& getEnv() const;

        /**
         * Decodes the AGI environment and returns a list of lines.
         *
         * @return The decoded AGI environment or an empty list if the environment is not available (that is
         *         if {@link #getEnv()} returns <code>null</code>).
         * @see #getEnv()
         */
        std::vector<std::string> decodeEnv();
    private:
        std::vector<std::string> decode(std::string s);
    };

}

#endif /* ASYNCAGIEVENT_H_ */
