#include "GumballMonitor.hpp"

namespace ProxyPattern
{
	GumballMonitor::GumballMonitor(GumballMachine *machine):m_machine(machine){}

	GumballMonitor::~GumballMonitor(){}

	void GumballMonitor::Report()
	{
		cout << "Gumball Machine: " << m_machine->GetLocation() << endl;
		cout << "Current inventory: " << m_machine->GetGumballCnt() << endl;
		cout << "Current state: " << m_machine->GetState() << endl;
	}
}
