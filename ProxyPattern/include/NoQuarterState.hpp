#ifndef NO_QUARTER_STATE_HPP
#define NO_QUARTER_STATE_HPP

#include "State.hpp"
#include "GumballMachine.hpp"

namespace ProxyPattern
{
	class GumballMachine;

	class NoQuarterState : public State
	{
		public:
			/* Constructor */
			NoQuarterState(GumballMachine *machine);
			/* Destructor */
			~NoQuarterState();
			/* Behavior defined below to each action */
			void InsertQuarter();
			void EjectQuarter();
			void TurnCrank();
			void Dispense();
			void ReFill(int cnt);
		private:
			GumballMachine *m_machine;
	};
}

#endif
