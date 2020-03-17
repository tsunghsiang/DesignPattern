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
		cout << "A gumball comes rolling out the slot" << endl;
		m_machine->ReleaseBall();
		if(m_machine->GetGumballCnt() > 0)
			;// Set GumballMachine to NoQuarterState
		else
			;// Set GumballMachine to SoldOutState
	}
}
