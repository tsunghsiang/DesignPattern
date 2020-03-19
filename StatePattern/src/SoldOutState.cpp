#include "SoldOutState.hpp"

namespace StatePattern
{
	SoldOutState::SoldOutState(GumballMachine *machine):m_machine(machine){}

	SoldOutState::~SoldOutState(){}

	void SoldOutState::InsertQuarter()
	{
		cout << "You can't insert a quarter, the machine is sold out" << endl;
	}

	void SoldOutState::EjectQuarter()
	{
		cout << "You can't eject, you haven't inserted a quarter yet" << endl;
	}

	void SoldOutState::TurnCrank()
	{
		cout << "You turned, but there are no gumballs" << endl;
	}

	void SoldOutState::Dispense()
	{
		cout << "No gumball dispensed" << endl;
	}

	void SoldOutState::ReFill(int cnt)
	{
		if(cnt <= 0)
		{
			cout << "Wrong number of gumballs" << endl;
			return;
		}

		// Refill gumballs
		m_machine->AddBall(cnt);
		// Set GumballMachine to NoQuarterState
		m_machine->SetState(m_machine->GetNoQuarterState());
	}
}
