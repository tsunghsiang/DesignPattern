#ifndef NO_QUARTER_STATE_HPP
#define NO_QUARTER_STATE_HPP

#include "State.hpp"

namespace StatePattern
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
		private:
			GumballMachine *m_machine;
	};
}

#endif
