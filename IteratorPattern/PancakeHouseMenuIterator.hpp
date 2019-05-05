#include "Iterator.hpp"
#include "MenuItem.hpp"
#include <vector>

using namespace std;

class PancakeHouseMenuIterator : public Iterator<MenuItem>
{
	public:
		/* Constructor */
		PancakeHouseMenuIterator(vector<MenuItem>::iterator it, size_t sz);
		/* Destructor */
		~PancakeHouseMenuIterator();
		/* Check if there are still other items */
		bool HasNext();
		/* Get next item of the list */
		MenuItem Next();
	private:
		std::vector<MenuItem>::iterator m_iter;
		int m_sz;
		int m_pos = 0;	
};
