#ifndef INCLUDE_GYRO_SENSOR
#define INCLUDE_GYRO_SENSOR

#include"Gyro_Sensor.h"

namespace hardware
{
	Gyro_Sensor::Gyro_Sensor()
	{
	}

	Gyro_Sensor::Gyro_Sensor(SENSOR_PORT_T _port)
	{
		port=_port;
	}

	void Gyro_Sensor::input()
	{
		angle_speed=ecrobot_get_gyro_sensor(port);
	}

	void Gyro_Sensor::abnormal_judge()
	{
	}
	int Gyro_Sensor::get()
	{
		return angle_speed;
	}
}
#endif
