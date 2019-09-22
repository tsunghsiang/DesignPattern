#ifndef DINNER_MENU_ITERATOR_HPP
#define DINNER_MENU_ITERATOR_HPP

#include "Iterator.hpp"
#include "MenuItem.hpp"

class DinnerMenuIterator : public Iterator<MenuItem>
{
	public:
		/* Constructor */
		DinnerMenuIterator(MenuItem * items, size_t size);
		/* Destructor */
		~DinnerMenuIterator();
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
