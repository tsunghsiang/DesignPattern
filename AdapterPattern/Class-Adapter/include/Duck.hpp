#ifndef DUCK_HPP
#define DUCK_HPP

#include <memory>
#include <iostream>

class Duck
{
	public:
		virtual void quack() = 0;
		virtual void duckFly() = 0;
	private:
};

using SPTR_Duck = std::shared_ptr<Duck>;

#endif
