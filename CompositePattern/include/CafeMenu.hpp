#ifndef CAFE_MENU_HPP
#define CAFE_MENU_HPP

#include "TypeDef.hpp"
#include "Menu.hpp"
#include "CafeMenuIterator.hpp"

using namespace std;

class CafeMenu : public Menu
{
	public:
		/* constructor */
		CafeMenu();
		/* destructor */
		~CafeMenu();
		/* member functions */
		Iterator<MenuItem> * CreateIterator();
		void AddItem(string name, string description, bool vegetarian, double price);
	private:
		HashMenu m_menu_items;
};

#endif
