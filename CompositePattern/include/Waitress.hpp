#ifndef WAITRESS_HPP
#define WAITRESS_HPP

#include "Menu.hpp"
#include "TypeDef.hpp"
#include <string.h>
#include <iostream>

using namespace std;

class Waitress
{
	public:
		/* Constructor */
		Waitress(MenuComponent * menu_component);
		/* Destructor */
		~Waitress();
		/* Print all items on the menu */
		void PrintMenu();
		/* Print all vagetarian items on the menu */
		void PrintVegetarianMenu();
	private:
		MenuComponent * m_all_menus;
};

#endif
