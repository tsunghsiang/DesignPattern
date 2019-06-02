#ifndef DINER_MENU_ITERATOR_HPP
#define DINER_MENU_ITERATOR_HPP

#include "Iterator.hpp"
#include "MenuItem.hpp"

class DinerMenuIterator : public Iterator<MenuItem>
{
	public:
		/* Constructor */
		DinerMenuIterator(MenuItem * items, size_t size);
		/* Destructor */
		~DinerMenuIterator();
		/* Check if there are other items */
		bool HasNext();
		/* Get the next item */
		MenuItem Next();	
	private:
		MenuItem * m_items;
		size_t m_num_of_items;
		int m_pos = 0;
};

#endif
