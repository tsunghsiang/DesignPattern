#ifndef HAS_QUARTER_STATE_HPP
#define HAS_QUARTER_STATE_HPP

#include <cstdlib>
#include <ctime>
#include "State.hpp"
#include "GumballMachine.hpp"

namespace StatePattern
{
	class GumballMachine;

	class HasQuarterState : public State
	{
		public:
			/* Constructor */
			HasQuarterState(GumballMachine *machine);
			/* Destructor */
			~HasQuarterState();
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
