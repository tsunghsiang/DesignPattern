#ifndef PANCAKE_HOUSE_MENU_HPP
#define PANCAKE_HOUSE_MENU_HPP

#include "Menu.hpp"
#include "PancakeHouseMenuIterator.hpp"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

typedef vector<MenuItem> ArrayList;

class PancakeHouseMenu : public Menu
{
	public:
		/* Constructor */
		PancakeHouseMenu();
		/* Destructor */
		~PancakeHouseMenu();
		/* Add a menu item into the menu list */
		void AddItem(string name, string description, bool vegetarian, double price);
		/* Get iterator of the menu items */
		Iterator<MenuItem> * CreateIterator();
	private:
		ArrayList m_menu_items;
};

#endif
