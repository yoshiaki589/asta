#include"Device_control.cpp"

namespace car
{
	class Wheel
	{
		private:
			float rotate_angle;
			float axle_speed;//ŽÔŽ²‘¬“x
			int movement_distance;
			class hardware::Device_control device_control;
			
		public:
			Wheel();
			void estimate_axle(int way);
			void drive();
	};
}
