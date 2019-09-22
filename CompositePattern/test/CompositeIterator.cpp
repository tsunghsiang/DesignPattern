#include "CompositeIterator.hpp"

CompositeIterator::CompositeIterator(MenuComponents::iterator it):m_iter(it){}

CompositeIterator::~CompositeIterator(){}

bool CompositeIterator::HasNext()
{
	return true;
}

MenuComponent CompositeIterator::Next()
{
	return void*;
}
