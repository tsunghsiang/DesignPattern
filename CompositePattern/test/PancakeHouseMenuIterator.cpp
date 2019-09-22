#include "PancakeHouseMenuIterator.hpp"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(ArrayList::iterator it, size_t sz):m_iter(it), m_sz(sz){}

PancakeHouseMenuIterator::~PancakeHouseMenuIterator(){}

bool PancakeHouseMenuIterator::HasNext()
{
	if(m_pos < m_sz)
		return true;
	else
		return false;
}

MenuItem PancakeHouseMenuIterator::Next()
{
	MenuItem item = *m_iter;
	m_pos++;
	m_iter++;
	return item;
}
