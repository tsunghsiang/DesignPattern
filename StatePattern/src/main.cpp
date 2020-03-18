#include <iostream>
#include <string>
#include "GumballMachine.hpp"

using namespace StatePattern;

int main(int argc, char *argv[])
{
	GumballMachine *machine = new GumballMachine(5);
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
	/* Print out the state of the machine, again */
	machine->DispInfo();
	delete machine;
	return 0;
}
