#include "GumballMachine.hpp"

namespace StatePattern
{
	GumballMachine::GumballMachine(int cnt):m_cnt(cnt), m_is_quarter_inserted(false)
	{
		m_no_quarter_state = new NoQuarterState(this);
		m_has_quarter_state = new HasQuarterState(this);
		m_sold_state = new SoldState(this);
		m_sold_out_state = new SoldOutState(this);

		if(GetGumballCnt() > 0)
			m_state = m_no_quarter_state;
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

		if(!GetQuarterInserted())
			return;

		m_state->Dispense();
	}

	void GumballMachine::DispInfo()
	{
		cout << endl;
		cout << "Mighty Gumball, Inc." << endl;
		cout << "C++-enabled Standing Gumball Model #2020" << endl;
		cout << "Inventory: " << m_cnt << " gumballs" << endl;

		if(m_state == m_no_quarter_state)
			cout << "Machine is waiting for quarter";
		else if(m_state == m_has_quarter_state)
			cout << "Machine is waiting for ejecting quarter or turning crank";
		else if(m_state == m_sold_state)
			cout << "Machine is waiting for dispensing";
		else if(m_state == m_sold_out_state)
			cout << "Machine is sold out";

		cout << endl << endl;
	}

	State *GumballMachine::GetNoQuarterState() { return m_no_quarter_state; }

	State *GumballMachine::GetHasQuarterState() { return m_has_quarter_state; }

	State *GumballMachine::GetSoldState() { return m_sold_state; }

	State *GumballMachine::GetSoldOutState() { return m_sold_out_state; }

	void GumballMachine::SetState(State *state) { m_state = state; }

	void GumballMachine::SetQuarterInserted(bool flag) { m_is_quarter_inserted = flag; }

	bool GumballMachine::GetQuarterInserted() { return m_is_quarter_inserted; }

	void GumballMachine::ReleaseBall() 
	{
		cout << "A gumball comes rolling out the slot ..." << endl;
		if(m_cnt > 0)	
			m_cnt--; 
	}

	int GumballMachine::GetGumballCnt() { return m_cnt; }
}
