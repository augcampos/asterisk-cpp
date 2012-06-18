/*
 * ModuleLoadReportEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include <boost/algorithm/string.hpp>
#include "asteriskcpp/manager/events/ModuleLoadReportEvent.h"

namespace asteriskcpp {
	const static std::string MODULE_SELECTION_PRELOAD = "Preload";
	const static std::string MODULE_SELECTION_ALL = "All";
	//const static std::string MODULE_LOAD_STATUS_DONE = "Done";

	ModuleLoadReportEvent::ModuleLoadReportEvent(const std::string & values) :
			ManagerEvent(values)
	{
	}

	ModuleLoadReportEvent::~ModuleLoadReportEvent()
	{
	}

	const std::string& ModuleLoadReportEvent::getModuleLoadStatus() const
	{
		return (getProperty("ModuleLoadStatus"));
	}

	const std::string& ModuleLoadReportEvent::getModuleSelection() const
	{
		return (getProperty("ModuleSelection"));
	}

	bool ModuleLoadReportEvent::isPreload() const
	{
		return (boost::iequals(getModuleSelection(), MODULE_SELECTION_PRELOAD));
	}

	bool ModuleLoadReportEvent::isAll() const
	{
		return (boost::iequals(getModuleSelection(), MODULE_SELECTION_ALL));
	}

	int ModuleLoadReportEvent::getModuleCount() const
	{
		return (getProperty<int>("ModuleCount"));
	}
} /* namespace asteriskcpp */
