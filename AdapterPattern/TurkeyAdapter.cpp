#include "TurkeyAdapter.hpp"

TurkeyAdapter::TurkeyAdapter(SPTR_Turkey turkey_ptr):m_turkey_ptr(turkey_ptr){}

void TurkeyAdapter::quack()
{
	m_turkey_ptr->gobble();
}

void TurkeyAdapter::fly()
{
	for(int i = 0; i < 5; i++)
		m_turkey_ptr->fly();
}
