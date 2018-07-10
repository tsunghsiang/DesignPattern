#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include "Duck.hpp"
#include <memory>
#include <iostream>

class MallardDuck : public Duck
{
	public:
		void quack();
		void fly();
	private:
};

using SPTR_MallardDuck = std::shared_ptr<MallardDuck>;

#endif
