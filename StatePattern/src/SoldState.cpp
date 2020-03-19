#include "SoldState.hpp"

namespace StatePattern
{
	SoldState::SoldState(GumballMachine *machine):m_machine(machine){}

	SoldState::~SoldState(){}

	void SoldState::InsertQuarter()
	{
		cout << "Please wait, we're ready to giving you a gumball" << endl;
	}

	void SoldState::EjectQuarter()
	{
		cout << "Sorry, you already turned the crank" << endl;
	}

	void SoldState::TurnCrank()
	{
		cout << "Turning twice doesn't get you another gumball" << endl;
	}

	void SoldState::Dispense()
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
		m_machine->SetQuarterInserted(false);
	}

	void SoldState::ReFill(int cnt)
	{
		cout << "Gumball machine has enough gumballs" << endl;
	}
}
