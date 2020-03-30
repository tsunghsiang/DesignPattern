#ifndef WINNER_STATE_HPP
#define WINNER_STATE_HPP

#include "State.hpp"
#include "GumballMachine.hpp"

namespace ProxyPattern
{
	class GumballMachine;

	class WinnerState : public State
	{
		public:
			/* Constructor */
			WinnerState(GumballMachine *machine);
			/* Destructor */
			~WinnerState();
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
