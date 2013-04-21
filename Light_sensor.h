extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	#include"nxt_config.h"
};

namespace hardware
{ 
	class Light_sensor
	{
		private:
			int brightness;
			int state;
			SENSOR_PORT_T port;
		public:
			Light_sensor();
			Light_sensor(SENSOR_PORT_T);
			void input();
			void abnormal_judge();
			int get();
	};
};
