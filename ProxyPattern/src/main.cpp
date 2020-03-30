#include <iostream>
#include <string>
#include "GumballMonitor.hpp"
//#include "GumballMachine.hpp"

using namespace ProxyPattern;

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		cerr << "GumballMachine <name> <inventory>\n";
		std::exit(1);
	}

	int inventory = std::stoi(argv[2]);
	if(inventory < 0)
	{
		cerr << "Insufficient inventory\n";
		std::exit(1);
	}

	GumballMachine *machine = new GumballMachine(argv[1], std::stoi(argv[2]));
	GumballMonitor *monitor = new GumballMonitor(machine);
	/* Print out the state of the machine */
	machine->DispInfo();
	machine->InsertQuarter();
	machine->TurnCrank();
	/* Print out the state of the machine, again */
	machine->DispInfo();
	machine->InsertQuarter();
	machine->EjectQuarter();
	machine->TurnCrank();
	/* Print out the state of the machine, again */
	machine->DispInfo();
	machine->InsertQuarter();
	machine->TurnCrank();
	machine->InsertQuarter();
	machine->TurnCrank();
	machine->EjectQuarter();
	/* Print out the state of the machine, again */
	machine->DispInfo();
	machine->InsertQuarter();
	machine->InsertQuarter();
	machine->TurnCrank();
	machine->InsertQuarter();
	machine->TurnCrank();
	machine->InsertQuarter();
	machine->TurnCrank();
	/* Refill gumballs */
	machine->ReFill(20);
	/* Print out the state of the machine, again */
	machine->DispInfo();
	monitor->Report();
	delete monitor;
	delete machine;
	return 0;
}
