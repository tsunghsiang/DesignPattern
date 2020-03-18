#include "WinnerState.hpp"

namespace StatePattern
{
	WinnerState::WinnerState(GumballMachine *machine):m_machine(machine){}

	WinnerState::~WinnerState(){}

	void WinnerState::InsertQuarter()
	{
		cout << "Please wait, we're ready to giving you a gumball" << endl;
	}

	void WinnerState::EjectQuarter()
	{
		cout << "Sorry, you already turned the crank" << endl;
	}

	void WinnerState::TurnCrank()
	{
		cout << "Turning twice doesn't get you another gumball" << endl;
	}

	void WinnerState::Dispense()
	{
		cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << endl;
		m_machine->ReleaseBall();
		if(m_machine->GetGumballCnt() == 0)
		{
			// Set GumballMachine to NoQuarterState
			m_machine->SetState(m_machine->GetNoQuarterState());
		}
		else
		{
			m_machine->ReleaseBall();
			if(m_machine->GetGumballCnt() > 0)
			{
				// Set GumballMachine to NoQuarterState
				m_machine->SetState(m_machine->GetNoQuarterState());
			}
			else
			{
				cout << "Oops, out of gumballs" << endl;
				// Set GumballMachine to SoldOutState
				m_machine->SetState(m_machine->GetSoldOutState());
			}
		}
		m_machine->SetQuarterInserted(false);
	}
}
