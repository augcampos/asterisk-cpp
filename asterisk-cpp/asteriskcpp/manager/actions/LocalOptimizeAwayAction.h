/*
 * LocalOptimizeAwayAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef LOCALOPTIMIZEAWAYACTION_H_
#define LOCALOPTIMIZEAWAYACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * <a href="https://wiki.asterisk.org/wiki/display/AST/ManagerAction_LocalOptimizeAway">LocalOptimizeAway</a> action -- Optimize away a local channel when possible.
     * <p>
     * Available since Asterisk 1.8
     *
     * @author SYON Communications Inc.
     */

    class LocalOptimizeAwayAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty LocalOptimizeAwayAction.
         */
        LocalOptimizeAwayAction();

        /**
         * Creates a new LocalOptimizeAwayAction with channel name.
         *
         * @param channel Name of the channel for clears the flag.
         */
        LocalOptimizeAwayAction(const std::string& channel);

        virtual ~LocalOptimizeAwayAction();


        /**
         * Sets the name of the channel.
         *
         * @return Name of the channel for clears the flag.
         */
        const std::string& getChannel() const;


        void setChannel(const std::string& channel);
    };

} //NAMESPACE

#endif /*LOCALOPTIMIZEAWAYACTION_H_*/
