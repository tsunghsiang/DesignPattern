#include "CompositeIterator.hpp"

CompositeIterator::CompositeIterator(MenuComponents::iterator it, size_t sz):m_iter(it), m_num_of_components(sz){}

CompositeIterator::~CompositeIterator(){}

bool CompositeIterator::HasNext()
{
	if(m_pos >= m_num_of_components)
		return false;
	else
		return true;
}

MenuComponent * CompositeIterator::Next()
{
	m_pos++;
	MenuComponents::iterator it = m_iter;
	std::advance(it, m_pos -1);
	return *it;
}
