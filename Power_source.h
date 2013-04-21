extern "C"{
	#include "kernel.h"
	#include "kernel_id.h"
	#include "ecrobot_interface.h"
	#include "balancer.h"
};

namespace hardware
{
	class Power_source
	{
		private:
			int voltage;
			int state;
		public:
			Power_source();
			void input();
			bool abnormal_judge();
			int get();
	};
};
