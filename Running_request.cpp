#ifndef RUNNING_REQUEST
#define RUNNING_REQUEST

#include"Running_request.h"

namespace run_strategy
{

	Running_request::Running_request()
	{
	}
	
	void Running_request::running_order()
	{
		while(!ecrobot_get_touch_sensor(NXT_PORT_S4));
		while(1){
			//running.run();
		}
	}
}
#endif
