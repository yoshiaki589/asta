#ifndef INCLUDE_TOUCH_SENSOR
#define INCLUDE_TOUCH_SENSOR

#include"Touch_sensor.h"

namespace hardware
{
	Touch_sensor::Touch_sensor()
	{
	}
	Touch_sensor::Touch_sensor(SENSOR_PORT_T _port)
	{
		port=_port;
	}

	void Touch_sensor::input()
	{
		ecrobot_get_touch_sensor(port);
	}

	bool Touch_sensor::abnormal_judge()
	{
		return true;
	}
};
#endif
