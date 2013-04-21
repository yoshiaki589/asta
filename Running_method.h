#include"Obstacle.cpp"
#include"Line.cpp"
#include"Amb_light.cpp"
#include"Maimai.cpp"
#include"Pid.cpp"
#include"Standing_position.cpp"
#include"Return_running.cpp"
#include"Moving_monitor.cpp"
#include"Driving_order.cpp"
#include"Obstacle.cpp"

namespace run_strategy 
{
	class Running_method
	{
		private:
			int tail_moving;
			int turn_num;
			int forward_num;
			int running_state;
			//é‘óºéwé¶
			class car::Moving_monitor moving_monitor;
			class car::Driving_order driving_order;
			//òHñ èÓïÒ
			class surface_road::Obstacle obstacle;
			class surface_road::Line line;
			class surface_road::Amb_light amb_light;
			//ïÔä‹
			class Maimai maimai;
			class Pid pid;
			class Standing_position standing_position;
			class Return_running return_running;
		public:
			Running_method();
			void judge_runmode();
	};
};
