#ifndef INCLUDE_SONAR_SENSOR
#define INCLUDE_SONAR_SENSOR

#include"Sonar_sensor.h"

namespace hardware
{
	Sonar_sensor::Sonar_sensor()
	{
	}

	Sonar_sensor::Sonar_sensor(SENSOR_PORT_T _port)
	{
		port=_port;
	}

	void Sonar_sensor::input()
	{
		distance=ecrobot_get_sonar_sensor(port);
	}

	bool Sonar_sensor::abnormal_judge()
	{	
		return 1;
	}

	int Sonar_sensor::get()
	{
		return distance;
	}

};
#endif
