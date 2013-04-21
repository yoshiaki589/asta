extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	#include"nxt_config.h"
};


#include"Moving_monitor.cpp"
#include"Driving_order.cpp"

namespace run_strategy
{
	class Cource
	{
		private:
			int cource_type;
			int serch_point;
			class Section section();
			//é‘óºéwé¶
			class car::Moving_monitor moving_monitor;
			class car::Driving_order driving_order;
		public:
			Cource();
			void notify_cource();
			void change_goal();
			void estimate_place();
	};
}
