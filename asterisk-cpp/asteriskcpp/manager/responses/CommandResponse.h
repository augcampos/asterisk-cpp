/*
 * CommandResponse.h
 *
 *  Created on: Sep 1, 2011
 *      Author: augcampos
 */

#ifndef COMMANDRESPONSE_H_
#define COMMANDRESPONSE_H_

#include "ManagerResponse.h"
#include <vector>

namespace asteriskcpp {

    /**
     * Response that is received when sending a CommandAction.<p>
     * Asterisk's handling of the command action is generelly quite hairy. It sends a "Response:
     * Follows" line followed by the raw output of the command including empty lines. At the end of the
     * command output a line containing "--END COMMAND--" is sent. The reader parses this response into
     * a CommandResponse object to hide these details.
     *
     * @see org.asteriskjava.manager.action.CommandAction
     *
     */
    class CommandResponse : public ManagerResponse {
    public:
        CommandResponse(const std::string& responseStr);
        virtual ~CommandResponse();

        /**
         * Returns the AMI authorization class of this response.
         *
         * @return always "Command"
         * @since 1.0.0
         */
        std::string getPrivilege() const;

        /**
         * Returns a List of strings representing the lines returned by the CLI command.
         *
         * @return a List of strings representing the lines returned by the CLI command.
         */
        const std::vector<std::string>& getResult();
    private:
        std::vector<std::string> result;
    };

} /* namespace asteriskcpp */
#endif /* COMMANDRESPONSE_H_ */
