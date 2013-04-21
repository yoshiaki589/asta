extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	#include"nxt_config.h"
};

namespace hardware
{
	class Sonar_sensor
	{
		private:
			int distance;//‹——£
			int state;
			SENSOR_PORT_T port;
		public:
			Sonar_sensor();
			Sonar_sensor(SENSOR_PORT_T _port);
			void input();
			bool abnormal_judge();
			int get();
	};
};
