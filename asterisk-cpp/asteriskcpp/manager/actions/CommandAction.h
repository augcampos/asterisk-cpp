/*
 * CommandAction.h
 *
 *  Created on: Sep 1, 2011
 *      Author: augcampos
 */

#ifndef COMMANDACTION_H_
#define COMMANDACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The CommandAction sends a command line interface (CLI) command to the
     * asterisk server.<p>
     * For a list of supported commands type <code>help</code> on Asterisk's
     * command line.<p>
     * In response to a CommandAction you will receive a CommandResponse that
     * contains the CLI output.<p>
     * Example:
     * <pre>
     * CommandAction commandAction = new CommandAction("iax2 show peers");
     * CommandResponse response = (CommandResponse) c.sendAction(commandAction);
     * for (String line : response.getResult())
     * {
     *     System.out.println(line);
     * }
     * </pre>
     * Where <code>c</code> is an instance of
     * {@link org.asteriskjava.manager.ManagerConnection}.
     *
     * @see org.asteriskjava.manager.response.CommandResponse
     */
    class CommandAction : public AbstractManagerAction {
    public:
        /**
         * Creates a new CommandAction.
         */
        CommandAction();
        /**
         * Creates a new CommandAction with the given command.
         *
         * @param command the CLI command to execute.
         * @since 0.2
         */
        CommandAction(const std::string& command);
        virtual ~CommandAction();


        virtual ManagerResponse* expectedResponce(const std::string& reponse);

        /**
         * Returns the command.
         */
        const std::string& getCommand() const;

        /**
         * Sets the CLI command to send to the Asterisk server.
         */
        void setCommand(std::string command);
    };

} /* namespace asteriskcpp */
#endif /* COMMANDACTION_H_ */
