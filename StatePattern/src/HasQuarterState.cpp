#include "HasQuarterState.hpp"

namespace StatePattern
{
	HasQuarterState::HasQuarterState(GumballMachine *machine):m_machine(machine){ srand(time(NULL)); }

	HasQuarterState::~HasQuarterState(){}

	void HasQuarterState::InsertQuarter()
	{
		cout << "You can't insert another quarter" << endl;
	}

	void HasQuarterState::EjectQuarter()
	{
		cout << "Quarter returned" << endl;
		m_machine->SetQuarterInserted(false);
		// Set GumballMachine to NoQuarterState
		m_machine->SetState(m_machine->GetNoQuarterState());
	}

	void HasQuarterState::TurnCrank()
	{
		cout << "You turned..." << endl;
		// Determine whether machine gets into SoldState or WinnerState (10%-win probability)
		int winner = rand() % 10;
		if(winner == 0 && m_machine->GetGumballCnt() > 1)
		{
			// Set GumballMachine to WinnerState
			m_machine->SetState(m_machine->GetWinnerState());
		}
		else
		{
			// Set GumballMachine to SoldState
			m_machine->SetState(m_machine->GetSoldState());
		}
	}

	void HasQuarterState::Dispense()
	{
		cout << "No gumball dispensed" << endl;
	}

	void HasQuarterState::ReFill(int cnt)
	{
		cout << "Gumball machine has enough gumballs" << endl;
	}
}
