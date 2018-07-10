#include "DuckAdapter.hpp"
#include <memory>

void DuckAdapter::gobble()
{
	quack();
}

void DuckAdapter::turkeyFly()
{
	duckFly();
	down();
}

void DuckAdapter::down()
{
	std::cout << "I'm landing off" << std::endl;	
}

void DuckAdapter::quack()
{
	std::cout << "Quack" << std::endl;
}

void DuckAdapter::duckFly()
{
	std::cout << "I'm flying" <<std::endl;
}
