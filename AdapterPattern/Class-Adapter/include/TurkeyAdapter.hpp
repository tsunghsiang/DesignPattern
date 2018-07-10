#ifndef TURKEY_ADAPTER_HPP
#define TURKEY_ADAPTER_HPP

#include "Duck.hpp"
#include "WildTurkey.hpp"
#include <memory>

class TurkeyAdapter : public Duck, private WildTurkey
{
	public:
		/* Duck member methods */
		void quack();
		void duckFly();
	private:
		/* WildTurkey member methods */
		void gobble();
		void turkeyFly();		
};

using SPTR_TurkeyAdapter = std::shared_ptr<TurkeyAdapter>;

#endif
