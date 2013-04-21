#include"Running_method.cpp"

namespace run_strategy
{
	class Section
	{
		private:
			int estimate_distance;
			int turn_ridius;
			int target_distance;
			class Running_method running_method;
		public:
			void run();
	};
};
