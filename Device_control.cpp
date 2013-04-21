#ifndef INCLUDE_DEVICE_CONTROL
#define INCLUDE_DEVICE_CONTROL

#include"Device_control.h"

namespace hardware{
	Device_control::Device_control()
	{
		motor_l=new hardware::Motor((unsigned char)NXT_PORT_C);
		motor_r=new hardware::Motor((unsigned char)NXT_PORT_B);
		motor_tail=new Motor(NXT_PORT_A);
		gyro_sensor=new Gyro_Sensor(NXT_PORT_S1);
		light_sensor=new Light_sensor(NXT_PORT_S3);
		sonar_sensor=new Sonar_sensor(NXT_PORT_S2);
		touch_sensor=new Touch_sensor(NXT_PORT_S4);
		power_source=new Power_source;
	}

	void Device_control::input()
	{
		motor_l->input();
		motor_r->input();
		motor_tail->input();
		light_sensor->input();
		sonar_sensor->input();
		gyro_sensor->input();
		power_source->input();
	}

	void Device_control::output()
	{
	}

	void Device_control::device_check()
	{
	}

	void Device_control::abnormal_inform()
	{
	}
}
#endif
