#include "NoQuarterState.hpp"

namespace StatePattern
{
	NoQuarterState::NoQuarterState(GumballMachine *machine):m_machine(machine){}

	NoQuarterState::~NoQuarterState(){}

	void NoQuarterState::InsertQuarter()
	{
		cout << "You inserted a quarter" << endl;
		// Set GumballMachine to HasQuarterState
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
