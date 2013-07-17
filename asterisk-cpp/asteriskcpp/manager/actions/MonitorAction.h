/*
 * MonitorAction.h
 *
 *  Created on: Jun 27, 2013
 *      Author: augcampos
 */

#ifndef MONITORACTION_H_
#define MONITORACTION_H_

#include "AbstractManagerAction.h"

namespace asteriskcpp {

    /**
     * The MonitorAction starts monitoring (recording) a channel.<p>
     * It is implemented in <code>res/res_monitor.c</code>
     * 
     * @author augcampos
     * @version $Id$
     */

    class MonitorAction : public AbstractManagerAction {
    public:

        /**
         * Creates a new empty MonitorAction.
         */
        MonitorAction();

        /**
         * Creates a new MonitorAction that starts monitoring the given channel and
         * writes voice data to the given files.<p>
         * The format of the files is "wav", they are not mixed.
         * 
         * @param channel the name of the channel to monitor
         * @param file the (base) name of the files to which the voice data is
         *            written
         * @since 0.2
         */
        MonitorAction(const std::string& channel, const std::string& file);

        /**
         * Creates a new MonitorAction that starts monitoring the given channel and
         * writes voice data to the given files.<p>
         * The files are not mixed.
         * 
         * @param channel the name of the channel to monitor
         * @param file the (base) name of the files to which the voice data is
         *            written
         * @param format the format to use for encoding the voice files
         * @since 0.2
         */
        MonitorAction(const std::string& channel, const std::string& file, const std::string& format);

        /**
         * Creates a new MonitorAction that starts monitoring the given channel and
         * writes voice data to the given file(s).
         * 
         * @param channel the name of the channel to monitor
         * @param file the (base) name of the file(s) to which the voice data is
         *            written
         * @param format the format to use for encoding the voice files
         * @param mix true if the two voice files should be joined at the end of the
         *            call
         * @since 0.2
         */
        MonitorAction(const std::string& channel, const std::string& file, const std::string& format, bool mix);

        virtual ~MonitorAction();


        /**
         * Returns the name of the channel to monitor.
         */
        const std::string& getChannel() const;

        /**
         * Sets the name of the channel to monitor.<p>
         * This property is mandatory.
         */
        void setChannel(const std::string& channel);

        /**
         * Returns the name of the file to which the voice data is written.
         */
        const std::string& getFile() const;

        /**
         * Sets the (base) name of the file(s) to which the voice data is written.<p>
         * If this property is not set it defaults to to the channel name as per CLI
         * with the '/' replaced by '-'.
         */
        void setFile(const std::string& file);

        /**
         * Returns the format to use for encoding the voice files.
         */
        const std::string& getFormat() const;

        /**
         * Sets the format to use for encoding the voice files.<p>
         * If this property is not set it defaults to "wav".
         */
        void setFormat(const std::string& format);

        /**
         * Returns true if the two voice files should be joined at the end of the
         * call.
         */
        bool getMix() const;


        void setMix(bool mix);
    };

} //NAMESPACE

#endif /*MONITORACTION_H_*/
