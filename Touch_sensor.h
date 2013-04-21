extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	#include"nxt_config.h"
};

namespace hardware
{  
class Touch_sensor
	{
		private:
			int state;
			SENSOR_PORT_T port;
		public:
			Touch_sensor();
			Touch_sensor(SENSOR_PORT_T);
			void input();
			bool abnormal_judge();
	};
};

