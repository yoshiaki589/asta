
namespace run_strategy
{
	class Pid
	{
		private:
			int p_gain;
			int i_gain;
			int d_gain;
			int pid_turn;
			int pid_target;
		public:
			void pid_method();
	};
};
