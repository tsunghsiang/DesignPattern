#ifndef GUMBALL_MACHINE_HPP
#define GUMBALL_MACHINE_HPP

#include <iostream>
#include <string>
#include "NoQuarterState.hpp"
#include "HasQuarterState.hpp"
#include "SoldState.hpp"
#include "SoldOutState.hpp"

using namespace std;

namespace StatePattern
{
	class GumballMachine
	{
		public:
			/* Constructor */
			GumballMachine(int cnt);
			/* Destructor */
			~GumballMachine();
			/* State transition members */
			void InsertQuarter();
			void EjectQuarter();
			void TurnCrank();
			void Dispense();
			/* Display machine state */
			void DispInfo();
			/* Other methods */
			State *GetNoQuarterState();
			State *GetHasQuarterState();
			State *GetSoldState();
			State *GetSoldOutState();
			void SetState(State *state);
			void SetQuarterInserted(bool flag);
			bool GetQuarterInserted();
			void ReleaseBall();
			int GetGumballCnt();
		private:
			/* number of gumballs */
			int m_cnt;
			/* State of the gumball machine */
			State *m_state;
			State *m_no_quarter_state;
			State *m_has_quarter_state;
			State *m_sold_state;
			State *m_sold_out_state;
			bool m_is_quarter_inserted;
	};
}

#endif
