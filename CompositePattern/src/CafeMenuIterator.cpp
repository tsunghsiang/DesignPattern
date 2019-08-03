#include "CafeMenuIterator.hpp"

CafeMenuIterator::CafeMenuIterator(HashMenu::iterator it, size_t size):m_iter(it), m_num_of_items(size){}

CafeMenuIterator::~CafeMenuIterator(){}

bool CafeMenuIterator::HasNext()
{
	if(m_pos >= m_num_of_items)
		return false;
	else
		return true;
}

MenuItem CafeMenuIterator::Next()
{
	m_pos++;
	HashMenu::iterator it = m_iter;
	advance(it, m_pos - 1);
	return *(it->second);	
}
