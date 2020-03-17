#include "GumballMachine.hpp"

namespace StatePattern
{
	GumballMachine::GumballMachine(int cnt):m_cnt(cnt)
	{
		m_no_quarter_state = new NoQuarterState(this);
		m_has_quarter_state = new HasQuarterState(this);
		m_sold_state = new SoldState(this);
		m_sold_out_state = new SoldOutState(this);

		if(GetGumballCnt() > 0)
			m_state = m_has_quarter_state;
		else
			m_state = m_sold_out_state;
	}

	GumballMachine::~GumballMachine()
	{
		if(m_no_quarter_state)
			delete m_no_quarter_state;
		if(m_has_quarter_state)
			delete m_has_quarter_state;
		if(m_sold_state)
			delete m_sold_state;
		if(m_sold_out_state)
			delete m_sold_out_state;
	}

	void GumballMachine::InsertQuarter()
	{
		m_state->InsertQuarter();
	}

	void GumballMachine::EjectQuarter()
	{
		m_state->EjectQuarter();
	}

	void GumballMachine::TurnCrank()
	{
		m_state->TurnCrank();
		m_state->Dispense();
	}

	void GumballMachine::DispInfo()
	{
		/*
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
		cout << endl << endl; */
	}

	State *GumballMachine::GetNoQuarterState() { return m_no_quarter_state; }

	State *GumballMachine::GetHasQuarterState() { return m_has_quarter_state; }

	State *GumballMachine::GetSoldState() { return m_sold_state; }

	State *GumballMachine::GetSoldOutState() { return m_sold_out_state; }

	void GumballMachine::SetState(State *state) { m_state = state; }

	void GumballMachine::ReleaseBall() 
	{
		cout << "A gumball comes rolling out the slot ..." << endl;
		if(m_cnt > 0)	
			m_cnt--; 
	}

	int GumballMachine::GetGumballCnt() { return m_cnt; }
}
