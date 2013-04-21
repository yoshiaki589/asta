#include "Running_method.cpp"

namespace run_strategy {

class Comon_running: public run_strategy::Running_method
{
public:
	Comon_running();
	void judge_runfinish();
};

} /* namespace run_strategy */
 /* COMN_RUNNING_H_ */
