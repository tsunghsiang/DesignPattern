#ifndef GUMBALL_MACHINE_HPP
#define GUMBALL_MACHINE_HPP

#include <iostream>
#include <string>
#include "TypeDef.hpp"

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
		private:
			/* number of gumballs */
			int m_cnt;
			/* State of the gumball machine */
			int m_state;
	};
}

#endif
