extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	#include"nxt_config.h"
};

namespace hardware
{
	class Gyro_Sensor
	{
		private:
			int angle_speed;//Šp‘¬“x
			int state;
			SENSOR_PORT_T port;
		public:
			Gyro_Sensor();
			Gyro_Sensor(SENSOR_PORT_T _port);
			void input();
			void abnormal_judge();
			int get();
	};
};
