#include "DuckAdapter.hpp"
#include <memory>

DuckAdapter::DuckAdapter(SPTR_Duck duck_ptr):m_duck_ptr(duck_ptr){}

void DuckAdapter::gobble()
{
	m_duck_ptr->quack();
}

void DuckAdapter::fly()
{
	m_duck_ptr->fly();	
	down();
}

void DuckAdapter::down()
{
	std::cout << "I'm landing off" << std::endl;	
}
