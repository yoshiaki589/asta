#ifndef INCLUDE_MOTOR
#define INCLUDE_MOTOR

#include"Motor.h"

namespace hardware{

	Motor::Motor()
	{
		
	}
	Motor::Motor(unsigned char _port)
	{
		port=_port;
		nxt_motor_set_speed(port,50,1);
		display_goto_xy(0,0);
		//display_string("Motor");
		display_update();
	}

	void Motor::input(void)
	{
		rotate_angle=nxt_motor_get_count(port);//トルク=回転数*タイヤの半径
	}

	void Motor::abnormal_judge()
	{
	}
	int Motor::get()
	{
		return rotate_angle;
	}
}
#endif

