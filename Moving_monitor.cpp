#ifndef INCLUDE_MOVING_MONITOR
#define INCLUDE_MOVING_MONITOR
#include"Moving_monitor.h"

namespace car{
	Moving_monitor::Moving_monitor()
	{
	}
	
	void Moving_monitor::estimate_moving()
	{
		wheel_left.estimate_axle(0);
		wheel_right.estimate_axle(1);
		tail.tail_state_estimate();
	}

	void Moving_monitor::break_line_inform()
	{
	}
}
#endif
