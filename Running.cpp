#ifndef INCLUDE_RUNNING
#define INCLUDE_RUNNING
#include"Running.h"

namespace run_strategy
{
	Running::Running()
	{
	}
	
	void Running::processing_remarke()
	{
	}
		
	void Running::run()
	{
		moving_monitor.estimate_moving();
	}
}
#endif
