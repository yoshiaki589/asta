#include"Wheel.cpp"
#include"Tail.cpp"

namespace car
{
	class Driving_order
	{
		private:
			int pre_angle;
			class Wheel wheel_left,Wheel_right;
			class Tail tail;
		public:
			Driving_order();
			void wheel_driving();
			void tail_driving();
			void init_angle();
	};
}
