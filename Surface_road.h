#include"Device_control.cpp"

namespace surface_road
{
	class Surface_road
	{
		private:
			int color;
			int white_threshold;
			int gray_threshold;
			int black_threshold;
			int running_threshold;
			class hardware::Device_control device_control;
		public:
			void comfirm_road();
			void color_set();
	};
};
