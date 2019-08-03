#ifndef WAITRESS_HPP
#define WAITRESS_HPP

#include "PancakeHouseMenu.hpp"
#include "DinnerMenu.hpp"
#include "CafeMenu.hpp"
#include "Menu.hpp"
#include <string.h>
#include <iostream>

using namespace std;

class Waitress
{
	public:
		/* Constructor */
		Waitress(Menu * pancake_houne_menu, Menu * diner_menu, Menu * cafe_menu);
		/* Destructor */
		~Waitress();
		/* Print all items on the menu */
		void PrintMenu();
		/* Print breakfast items on the menu */
		void PrintBreakfastMenu();
		/* Print lunch items on the menu */
		void PrintLunchMenu();
		/* Print dinner items on the menu */
		void PrintDinnerMenu();
		/* Print all vagetarian items on the menu */
		void PrintVegetarianMenu();
		/* Check if the item is vegetable */
		bool IsItemVegetarian(string name);
	private:
		/* Check whether a certain item is vegetable or not in a menu */
		bool IsVegetarian(Iterator<MenuItem> * iterator, string name);
		/* Print items of a certain menu */
		void PrintMenu(Iterator<MenuItem> * iterator);
		/* Print vegetable items of a certain menu */
		void PrintVegetarianMenu(Iterator<MenuItem> * iterator);
		Menu * m_pancake_house_menu;
		Menu * m_diner_menu;
		Menu * m_cafe_menu;
};

#endif
