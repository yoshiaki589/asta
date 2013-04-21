#ifndef POWER_SOURCE
#define POWER_SOURCE

#include"Power_source.h"

namespace hardware
{
	Power_source::Power_source()
	{
	}

	void Power_source::input()
	{
		voltage=ecrobot_get_battery_voltage();
	}

	bool Power_source::abnormal_judge()
	{
		return true;
	}

	int Power_source::get()
	{
		return voltage;
	}
};
#endif
