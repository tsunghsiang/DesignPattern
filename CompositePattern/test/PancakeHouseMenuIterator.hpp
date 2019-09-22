#include "Iterator.hpp"
#include "TypeDef.hpp"

using namespace std;

class PancakeHouseMenuIterator : public Iterator<MenuItem>
{
	public:
		/* Constructor */
		PancakeHouseMenuIterator(ArrayList::iterator it, size_t sz);
		/* Destructor */
		~PancakeHouseMenuIterator();
		/* Check if there are still other items */
		bool HasNext();
		/* Get next item of the list */
		MenuItem Next();
	private:
		ArrayList::iterator m_iter;
		int m_sz;
		int m_pos = 0;	
};
