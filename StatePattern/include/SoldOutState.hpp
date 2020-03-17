#ifndef SOLD_OUT_STATE_HPP
#define SOLD_OUT_STATE_HPP

#include "State.hpp"
#include "GumballMachine.hpp"

namespace StatePattern
{
	class SoldOutState : public State
	{
		public:
			/* Constructor */
			SoldOutState(GumballMachine *machine);
			/* Destructor */
			~SoldOutState();
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
