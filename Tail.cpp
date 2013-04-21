#ifndef INCLUDE_TAIL
#define INCLUDE_TAIL

#include"Tail.h"

namespace car{
	Tail::Tail()
	{
	}
	
	void Tail::drive()
	{
	}
	
	void Tail::tail_state_estimate()
	{
		rotate_angle=device_control.motor_tail->get()*M_PI/180;
	}
};

#endif
