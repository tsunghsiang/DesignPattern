#ifndef MENU_HPP
#define MENU_HPP

#include "Iterator.hpp"
#include "MenuItem.hpp"
#include <string.h>

using namespace std;

class Menu
{
	public:
		/* Let client get the iterator of the menu */
		virtual Iterator<MenuItem> * CreateIterator() = 0;
		/* Add an item to the menu */
		virtual void AddItem(string name, string description, bool vegetarian, double price) = 0;
	private:
};

#endif
