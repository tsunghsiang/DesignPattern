#ifndef COMPOSITE_ITERATOR_HPP
#define COMPOSITE_ITERATOR_HPP

#include "Iterator.hpp"
#include "TypeDef.hpp"
#include "MenuComponent.hpp"
#include <iostream>

class CompositeIterator : public Iterator<MenuComponent>
{
	public:
		/* Constructor */
		CompositeIterator(MenuComponents::iterator it, size_t sz);
		/* Destructor */
		~CompositeIterator();
		/* Check if there are still other elements to iterate through */
		bool HasNext();
		/* Get next element */
		MenuComponent Next();
	private:
		MenuComponents::iterator m_iter;
		size_t m_num_of_components;
		int m_pos = 0;
};

#endif
