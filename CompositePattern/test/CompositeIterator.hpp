#ifndef COMPOSITE_ITERATOR_HPP
#define COMPOSITE_ITERATOR_HPP

#include "Iterator.hpp"
#include "TypeDef.hpp"
#include <iterator>

class CompositeIterator : public Iterator<MenuComponent>
{
	public:
		/* Constructor */
		CompositeIterator(MenuComponents::iterator it);
		/* Destructor */
		~CompositeIterator();
		/* Check if there are other composite elements to iterate through */
		bool HasNext();
		/* Return the next composite element */
		MenuComponent Next();
	private:
		MenuComponents::iterator m_iter;
};

#endif
