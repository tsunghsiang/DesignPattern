#ifndef DINNER_MENU_HPP
#define DINNER_MENU_HPP

#include "Menu.hpp"
#include "DinnerMenuIterator.hpp"
#include "TypeDef.hpp"
#include <exception>

using namespace std;

class DinnerMenu : public Menu
{
	public:
		/* Constructor */
		DinnerMenu();
		/* Destructor */
		~DinnerMenu();
		/* Add item into the item array */
		void AddItem(string name, string description, bool vegetarian, double price);
		/* Get iterator of DinerMenu */
		Iterator<MenuItem> * CreateIterator();
	private:
		/* Max number of items in the item array */	
		static const int MAX_ITEMS = 6;
		/* Current number of items in the item array */
		int m_num_of_items = 0;
		/* Item array */
		MenuItem m_menu_items[MAX_ITEMS];		
};

#endif
