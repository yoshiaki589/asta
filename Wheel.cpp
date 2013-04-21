#ifndef INCLUDE_WHEEL
#define INCLUDE_WHEEL

#include"Wheel.h"
//#include"distance.cpp"

namespace car
{
	Wheel::Wheel()
	{
		//device_control=_device_control;
	}
	
	void Wheel::estimate_axle(int way)
	{
		static float cur_angle;
		cur_angle=rotate_angle;
		if(way==0){
			movement_distance=device_control.motor_l->get();
			rotate_angle=device_control.motor_l->get()*M_PI/180.0;
		}
		else if(way==1){
			movement_distance=device_control.motor_r->get();
			rotate_angle=device_control.motor_r->get()*M_PI/180.0;
		}
		axle_speed=4.1*(rotate_angle-cur_angle)/0.004;
	}
	
	void Wheel::drive()
	{
	}
}
#endif
