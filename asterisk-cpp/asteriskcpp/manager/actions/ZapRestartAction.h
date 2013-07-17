/*
 * ZapRestartAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef ZAPRESTARTACTION_H_
#define ZAPRESTARTACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * Fully restarts all zaptel channels and terminates any calls on Zap
     * interfaces.
     * <p>
     * Available since Asterisk 1.4.
     * 
     * @author augcampos
     * @since 0.3
     * @version $Id$
     */

    class ZapRestartAction : public AbstractManagerAction {
    public:


        ZapRestartAction();

        virtual ~ZapRestartAction();

    };

} //NAMESPACE

#endif /*ZAPRESTARTACTION_H_*/
