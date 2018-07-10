#ifndef DUCK_ADAPTER_HPP
#define DUCK_ADAPTER_HPP

#include "Turkey.hpp"
#include "MallardDuck.hpp"
#include <memory>
#include <iostream>

class DuckAdapter : public Turkey, private MallardDuck
{
	public:
		/* Turkey member methods */
		void gobble();
		void turkeyFly();
		void down();
	private:
		/* Duck members methods */
		void quack();
		void duckFly();
};

using SPTR_DuckAdapter = std::shared_ptr<DuckAdapter>;

#endif
