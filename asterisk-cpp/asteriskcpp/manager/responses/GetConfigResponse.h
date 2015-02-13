/* 
 * File:   GetConfigResponse.h
 * Author: augcampos
 *
 * Created on July 11, 2013, 3:07 AM
 */

#ifndef GETCONFIGRESPONSE_H
#define	GETCONFIGRESPONSE_H

#include "asteriskcpp/manager/responses/ManagerResponse.h"

namespace asteriskcpp {

    /**
     * Response that is received when sending a GetConfigAction.
     * <p>
     * Asterisk's response to the GetConfig command is ugly, and requires some
     * parsing of attributes. This class lazily parses its own attributes to hide
     * the ugly details. If the file requested exists but does not contain at least
     * a line with a category, the ResponseBuilder won't create an instance of
     * GetConfigResponse, as it won't know what the empty response is.
     * 
     * @see org.asteriskjava.manager.action.GetConfigAction
     * @author martins
     * @since 0.3
     */
    class GetConfigResponse : public ManagerResponse {
    public:
        GetConfigResponse(const std::string& responseStr);
        virtual ~GetConfigResponse();


        /**
         * Returns the map of category numbers to category names.
         * 
         * @return the map of category numbers to names.
         * @see org.asteriskjava.manager.response.GetConfigResponse#getLines
         */
        const std::map<std::string, std::string>& getCategories() const;

        /**
         * Returns the map of line number to line value for a given category.
         * 
         * @param categoryNumber a valid category number from getCategories.
         * @return the map of category numbers to names.
         * @see org.asteriskjava.manager.response.GetConfigResponse#getCategories
         */
        const std::map<int, std::string>& getLines(int categoryNumber) const;

    private:
        std::map<std::string, std::string> categories;
        std::map<int, std::string> lines;

    };
}
#endif	/* GETCONFIGRESPONSE_H */

