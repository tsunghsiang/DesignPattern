#ifndef SOLD_STATE_HPP
#define SOLD_STATE_HPP

#include "State.hpp"
#include "GumballMachine.hpp"

namespace ProxyPattern
{
	class GumballMachine;

	class SoldState : public State
	{
		public:
			/* Constructor */
			SoldState(GumballMachine *machine);
			/* Destructor */
			~SoldState();
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
