#include"Get_gray.cpp"
#include"Running_method.cpp"

namespace run_strategy
{
	class Lookup_running: public Running_method
	{
		private:
			int distance;
			int direction;
			int body_angle;
			class Get_gray get_gray;
		public:
			void judge_runfinish();
	};
};
