#ifndef STAIR_RUNNING_H_
#define STAIR_RUNNING_H_

#include "Running_method.cpp"
#include "Bump.cpp"
#include "Get_gray.cpp"

namespace run_strategy {

class Stair_running: public run_strategy::Running_method
{
	private:
		int distance;
		int direction;
		int stir_num;
		class Bump bump;
		class Get_gray get_gray;
	public:
		Stair_running();
		void judge_runfinish();
};

} /* namespace run_strategy */
#endif /* STAIR_RUNNING_H_ */
