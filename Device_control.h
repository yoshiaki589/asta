#include"Motor.cpp"
#include"Gyro_Sensor.cpp"
#include "Light_sensor.cpp"
#include"Sonar_sensor.cpp"
#include"Touch_sensor.cpp"
#include"Power_source.cpp"

namespace hardware{
extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	#include"nxt_config.h"
};
	class Device_control
	{
		private:

		public:
			class  hardware::Motor *motor_l,*motor_r,*motor_tail;
			class hardware::Gyro_Sensor *gyro_sensor;
			class Light_sensor *light_sensor;
			class Sonar_sensor *sonar_sensor;
			class Touch_sensor *touch_sensor;
			class Power_source *power_source;
			Device_control();
			void input();
			void output();
			void device_check();
			void abnormal_inform();
	};
}
