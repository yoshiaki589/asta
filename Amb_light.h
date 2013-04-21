#ifndef INCLUDE_DEVICE_CONTROL
	#define INCLUDE_DEVICE_CONTROL
	#include"Device_control.cpp"
#endif

namespace surface_road
{
	class Amb_light
	{
		private:
			int amb_num;
			class Device_control device_control();
		public:
			void amb_check();
	};
};
