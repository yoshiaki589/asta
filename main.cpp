extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	//#include"nxt_config.h"
};
//#include"distance.h"
#include"Running_request.cpp"

void ecrobot_device_intialize()
{	
}

void ecrobot_device_terminate()
{
}

void user_1ms_isr_type2()
{
}


extern "C" TASK(TaskMain)
{
	class run_strategy::Running_request *running_request;
	running_request=new run_strategy::Running_request();
	while(1){
		running_request->running_order();
		display_update();
	}
}
