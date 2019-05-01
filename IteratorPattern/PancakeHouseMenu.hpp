#ifndef PANCAKE_HOUSE_MENU_HPP
#define PANCAKE_HOUSE_MENU_HPP

#include <iostream>
#include <memory>
#include <vector>
#include "MenuItem.hpp"

using namespace std;

typedef vector<MenuItem> ArrayList;

class PancakeHouseMenu
{
	public:
		/* Constructor */
		PancakeHouseMenu();
		/* Destructor */
		~PancakeHouseMenu();
		/* Add a menu item into the menu list */
		void AddItem(string name, string description, bool vegetarian, double price);
		/* Get list of menu items */
		ArrayList & GetMenuItems();
	private:
		ArrayList m_menu_items;
};

#endif
