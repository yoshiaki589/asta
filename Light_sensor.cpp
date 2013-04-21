#ifndef INCLUDE_LIGHT_SENSOR
#define INCLUDE_LIGHT_SENSOR

#include"Light_sensor.h"

namespace hardware
{
	Light_sensor::Light_sensor()
	{
	}

	Light_sensor::Light_sensor(SENSOR_PORT_T _port)
	{
		port=_port;
	}

	void Light_sensor::input()
	{
		brightness=ecrobot_get_light_sensor(port);
	}

	void Light_sensor::abnormal_judge()
	{
	}

	int Light_sensor::get()
	{
		return brightness;
	}
};
#endif
