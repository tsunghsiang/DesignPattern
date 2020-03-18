#include "NoQuarterState.hpp"

namespace StatePattern
{
	NoQuarterState::NoQuarterState(GumballMachine *machine):m_machine(machine){}

	NoQuarterState::~NoQuarterState(){}

	void NoQuarterState::InsertQuarter()
	{
		cout << "You inserted a quarter" << endl;
		m_machine->SetQuarterInserted(true);
		// Set GumballMachine to HasQuarterState
		m_machine->SetState(m_machine->GetHasQuarterState());
	}

	void NoQuarterState::EjectQuarter()
	{
		cout << "You haven't inserted a quarter" << endl;
	}

	void NoQuarterState::TurnCrank()
	{
		cout << "You turned but there's no quarter" << endl;
	}

	void NoQuarterState::Dispense()
	{
		cout << "You need to pay first" << endl;
	}
}
