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
		// Set GumballMachine to NoQuarterState
	}

	void HasQuarterState::TurnCrank()
	{
		cout << "You turned..." << endl;
		// Set GumballMachine to SoldState
	}

	void HasQuarterState::Dispense()
	{
		cout << "No gumball dispensed" << endl;
	}
}
