#ifndef DUCK_HPP
#define DUCK_HPP

#include <memory>
#include <iostream>

class Duck
{
	public:
		virtual void quack();
		virtual void fly();
	private:
};

using SPTR_Duck = std::shared_ptr<Duck>;

#endif
