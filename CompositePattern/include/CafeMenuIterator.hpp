#ifndef CAFE_MENU_ITERATOR
#define CAFE_MENU_ITERATOR

#include "Iterator.hpp"
#include "TypeDef.hpp"
#include <iterator>
#include <map>

using namespace std;

class CafeMenuIterator : public Iterator<MenuItem> 
{
	public:
		/* constructor */
		CafeMenuIterator(HashMenu::iterator it, size_t size);
		/* destructor */
		~CafeMenuIterator();
		/* Check if there are still other elements to iterate through */
		bool HasNext();
		/* Return the next element */
		MenuItem Next();
	private:
		HashMenu::iterator m_iter;
		size_t m_num_of_items;
		int m_pos = 0;
};

#endif
