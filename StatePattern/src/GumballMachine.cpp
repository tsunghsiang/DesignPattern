#include "GumballMachine.hpp"

namespace StatePattern
{
	GumballMachine::GumballMachine(int cnt):m_cnt(cnt), m_state(SOLD_OUT)
	{
		if(m_cnt > 0)
			m_state = NO_QUARTER;
	}

	GumballMachine::~GumballMachine(){}

	void GumballMachine::InsertQuarter()
	{
		switch(m_state)
		{
			case NO_QUARTER:
				m_state = HAS_QUARTER;
				cout << "You inserted a quarter" << endl;
				break;
			case HAS_QUARTER:
				cout << "You can't insert another quarter" << endl;
				break;
			case SOLD_OUT:
				cout << "YOu can't insert a quarter, the machine is sold out" << endl;
				break;
			case SOLD:
				cout << "Please wait, we're ready giving you a gumball" << endl;
				break;
			default:
				break;
		}
	}

	void GumballMachine::EjectQuarter()
	{
		switch(m_state)
		{
			case NO_QUARTER:
				cout << "You haven't inserted a quarter" << endl;
				break;
			case HAS_QUARTER:
				m_state = NO_QUARTER;
				cout << "Quarter returned" << endl;
				break;
			case SOLD_OUT:
				cout << "You can't eject, you haven't inserted a quarter yet" << endl;
				break;
			case SOLD:
				cout << "Sorry, you already turned the crank" << endl;
				break;
			default:
				break;
		}
	}

	void GumballMachine::TurnCrank()
	{
		switch(m_state)
		{
			case NO_QUARTER:
				cout << "YOu turned but there's no quarter" << endl;
				break;
			case HAS_QUARTER:
				m_state = SOLD;
				cout << "You turned..." << endl;
				Dispense();
				break;
			case SOLD_OUT:
				cout << "You turned, but there are no gumballs" << endl;
				break;
			case SOLD:
				cout << "Turning twice doesn't get you another gumball!" << endl;
				break;
			default:
				break;
		}
	}

	void GumballMachine::Dispense()
	{
		switch(m_state)
		{
			case NO_QUARTER:
				cout << "You need to pay first" << endl;
				break;
			case HAS_QUARTER:
				cout << "No gumball dispensed" << endl;
				break;
			case SOLD_OUT:
				cout << "No gumball dispensed" << endl;
				break;
			case SOLD:
				cout << "A gumball comes rolling out the slot" << endl;
				m_cnt--;
				if(m_cnt == 0)
				{
					m_state = SOLD_OUT;
					cout << "Oops, out of gumballs!" << endl;
				}
				else
				{
					m_state = NO_QUARTER;
				}
				break;
			default:
				break;
		}
	}

	void GumballMachine::DispInfo()
	{
		cout << endl;
		cout << "Mighty Gumball, Inc." << endl;
		cout << "C++-enabled Standing Gumball Model #2020" << endl;
		cout << "Inventory: " << m_cnt << " gumballs" << endl;
		switch(m_state)
		{
			case NO_QUARTER:
				cout << "Machine is waiting for quarter";
				break;
			case HAS_QUARTER:
				cout << "Machine is waiting for ejecting quarter or turning crank";
				break;
			case SOLD:
				cout << "Machine is waiting for dispensing";
				break;
			case SOLD_OUT:
				cout << "Machine is sold out";
				break;
			default:
				break;
		}
		cout << endl << endl;
	}
}
