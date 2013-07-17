/*
 * GetConfigAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef GETCONFIGACTION_H_
#define GETCONFIGACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The GetConfigAction sends a GetConfig command to the Asterisk server.<p>
     * The GetConfigAction returns a GetConfigResponse.
     *
     * @author martins
     * @see org.asteriskjava.manager.response.GetConfigResponse
     * @since 0.3
     * 
     * @ExpectedResponse(GetConfigResponse)
     */
    

    class GetConfigAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new GetConfigAction.
         */
        GetConfigAction();

        /**
         * Creates a new GetConfigAction with the given filename.
         *
         * @param filename the name of the file to get.
         */
        GetConfigAction(const std::string& filename);

        virtual ~GetConfigAction();

        
        virtual ManagerResponse* expectedResponce(const std::string& reponse);

        /**
         * Returns the filename.
         */
        const std::string& getFilename() const;


        void setFilename(const std::string& filename);
    };

} //NAMESPACE

#endif /*GETCONFIGACTION_H_*/
