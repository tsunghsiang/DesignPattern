#include "DinerMenuIterator.hpp"

DinerMenuIterator::DinerMenuIterator(MenuItem * items, size_t size) : m_items(items), m_num_of_items(size){}

DinerMenuIterator::~DinerMenuIterator(){}

bool DinerMenuIterator::HasNext()
{
	if(m_pos < m_num_of_items && (m_items + m_pos) != NULL)
		return true;
	else 
		return false;
}

MenuItem DinerMenuIterator::Next()
{
	MenuItem item = m_items[m_pos];
	m_pos++;
	return item;
}
