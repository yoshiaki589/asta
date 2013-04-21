#include"Device_control.cpp"

namespace car
{
	class Tail
	{
		private:
			float rotate_angle;
			class hardware::Device_control device_control;
		public:
			Tail();
			void drive();
			void tail_state_estimate();
	};
}

