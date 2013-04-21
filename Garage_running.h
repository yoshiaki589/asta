

#include"Running_method.cpp"

namespace run_strategy
{
	class Garage_running :public Running_method
	{
		private:
			int distance;
			int direction;
		public:
			Garage_running();
	};

} /* namespace run_stratage */
 /* GARAGERUNNING_H_ */
