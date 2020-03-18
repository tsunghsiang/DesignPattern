#include "HasQuarterState.hpp"

namespace StatePattern
{
	HasQuarterState::HasQuarterState(GumballMachine *machine):m_machine(machine){}

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
		// Set GumballMachine to SoldState
		m_machine->SetState(m_machine->GetSoldState());
	}

	void HasQuarterState::Dispense()
	{
		cout << "No gumball dispensed" << endl;
	}
}
