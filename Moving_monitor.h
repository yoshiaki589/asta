#include"Wheel.cpp"
#include"Tail.cpp"
#include"Own_angle.cpp"

namespace car
{
	
	class Moving_monitor
	{
		private:
			int line_distance;
			int line_way;
			int body_angle;
			int body_way;
			int moving_way;
			class car::Wheel wheel_left,wheel_right;
			Tail tail;
			Own_angle own_angle;
		public:
			Moving_monitor();
			void estimate_moving();
			void break_line_inform();
	};
}
