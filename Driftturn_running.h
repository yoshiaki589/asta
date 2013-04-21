#include"Running_method.cpp"

namespace run_strategy
{
	class Driftturn_running :public Running_method
	{
		private:
			int bottle_place;
			int distance;
			int direction;
		public:
			void judge_runfinish();
	};
};
