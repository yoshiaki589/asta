extern "C"{
	#include"kernel.h"
	#include"kernel_id.h"
	#include"ecrobot_interface.h"
	#include"nxt_config.h"
	#include<math.h>
};

namespace hardware
{
	class Motor
	{
		private:
			double drive_torque;//�쓮��
			int rotate_angle;//��]�p�x[deg]
			unsigned char port;
		public:
			Motor();
			Motor(unsigned char _port);
			void input();
			void abnormal_judge();
			int get();
	};
}
