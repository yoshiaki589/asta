extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	#include"nxt_config.h"
};

#include"Running.cpp"

namespace run_strategy
{
	class Running_request
	{
		private:
			class run_strategy::Running running;
		public:
			Running_request();
			void running_order();
	};
}

