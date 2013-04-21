#ifndef INCLUDE_COURCE
#define INCLUDE_COURCE

#include"Cource.h"

namespace run_strategy
{
	Cource::Cource()
	{
		nxt_motor_set_speed(NXT_PORT_C,50,1);
		display_goto_xy(0,1);
		display_string("course");
		display_update();
	}
	
	void Cource::notify_cource()
	{
	}
	
	void Cource::change_goal()
	{
	}
	
	void Cource::estimate_place()
	{
	}
}

#endif
