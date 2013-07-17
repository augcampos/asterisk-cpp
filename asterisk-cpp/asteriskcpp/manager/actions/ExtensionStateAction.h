/*
 * ExtensionStateAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef EXTENSIONSTATEACTION_H_
#define EXTENSIONSTATEACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The ExtensionStateAction queries the state of an extension in a given context.
     * If the extension has a hint, will use devicestate to check the status of the
     * device connected to the extension.
     *
     * @author augcampos
     * @version $Id$
     * 
     * @ExpectedResponse(ExtensionStateResponse)
     */


    class ExtensionStateAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new ExtensionStateAction.
         */
        ExtensionStateAction();

        /**
         * Creates a new ExtensionStateAction that queries the state of the given extension in
         * the given context.
         *
         * @param exten the extension to query.
         * @param context the name of the context that contains the extension to query.
         * @since 1.0.0
         */
        ExtensionStateAction(const std::string& context);

        virtual ~ExtensionStateAction();


        virtual ManagerResponse* expectedResponce(const std::string& reponse);

        /**
         * Returns the extension to query.
         *
         * @return the extension to query.
         */
        const std::string& getExten() const;

        /**
         * Sets the extension to query.
         *
         * @param exten the extension to query.
         */
        void setExten(const std::string& exten);

        /**
         * Returns the name of the context that contains the extension to query.
         *
         * @return the name of the context that contains the extension to query.
         */
        const std::string& getContext() const;


        void setContext(const std::string& context);
    };

} //NAMESPACE

#endif /*EXTENSIONSTATEACTION_H_*/
