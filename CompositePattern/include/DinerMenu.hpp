#ifndef DINER_MENU_HPP
#define DINER_MENU_HPP

#include "Menu.hpp"
#include "DinerMenuIterator.hpp"
#include <exception>
#include <string.h>

using namespace std;

class DinerMenu : public Menu
{
	public:
		/* Constructor */
		DinerMenu();
		/* Destructor */
		~DinerMenu();
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
