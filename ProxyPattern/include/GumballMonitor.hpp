#ifndef GUMBALL_MONITOR_HPP
#define GUMBALL_MONITOR_HPP

#include "GumballMachine.hpp"

namespace ProxyPattern
{
	
	class GumballMonitor
	{
		public:
			/* Constructor */
			GumballMonitor(GumballMachine *machine);
			/* Destructor */
			~GumballMonitor();
			/* Getter Methods */
			void Report();
		private:
			GumballMachine *m_machine;
	};

}

#endif
