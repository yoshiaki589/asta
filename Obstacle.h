#include"Device_control.cpp"

namespace surface_road
{
	class Obstacle
	{
		private:
			int obstacle_exist;
			class hardware::Device_control device_control;
		public:
			Obstacle();
			void obstacle_check();
	};
};
