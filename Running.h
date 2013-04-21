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
	class Running
	{
		private:
			int running_mode;
			int running_process;
			class car::Moving_monitor moving_monitor;
			class car::Driving_order driving_order;
		public:
			Running();
			void processing_remarke();
			void run();
	};
}
