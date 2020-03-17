#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>
#include <string>

using namespace std;

namespace StatePattern
{
	class State
	{
		public:
			virtual void InsertQuarter() = 0;
			virtual void EjectQuarter() = 0;
			virtual void TurnCrank() = 0;
			virtual void Dispense() = 0;
		private:
	};
}

#endif
