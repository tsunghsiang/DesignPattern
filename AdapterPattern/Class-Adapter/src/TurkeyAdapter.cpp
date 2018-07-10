#include "TurkeyAdapter.hpp"

void TurkeyAdapter::quack()
{
	gobble();
}

void TurkeyAdapter::duckFly()
{
	for(int i = 0; i < 5; i++)
		turkeyFly();
}

void TurkeyAdapter::gobble()
{
	std::cout << "Gobble gobble" << std::endl;
}

void TurkeyAdapter::turkeyFly()
{
	std::cout << "I'm flying a short distance" << std::endl;
}
