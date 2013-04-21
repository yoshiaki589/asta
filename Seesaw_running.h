#ifndef SEESAW_RUNNING_H_
#define SEESAW_RUNNING_H_

#include"Running_method.cpp"
#include"Bump.cpp"
#include"Get_gray.cpp"

namespace run_strategy {

	class Seesaw_running : public Running_method
	{
		private:
			int distance;
			int direction;
			int exist_bump;
			class Bump bump;
			class Get_gray get_gray;
		public:
			Seesaw_running();
			void judge_runfinish();
	};

} /* namespace run_stratage */
#endif /* SEESAW_RUNNING_H_ */
