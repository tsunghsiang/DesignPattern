#ifndef MENU_HPP
#define MENU_HPP

#include "Iterator.hpp"
#include "TypeDef.hpp"
#include "CompositeIterator.hpp"
#include <string.h>

using namespace std;

class Menu : public MenuComponent
{
	public:
		/* Constructor */
		Menu();
		Menu(string name, string description);
		/* Desctructor */
		~Menu();
		/* Add a menu compoent into the set */
		void Add(MenuComponent * component);
		/* Remove a menu component from the set */
		void Remove(MenuComponent * component);
		/* Get child menu component */
		MenuComponent * GetChild(int i);
		/* Get name of the menu */
		std::string GetName();
		/* Get description of the menu */
		std::string GetDescription();
		/* Print menu information */
		void Print();
		/* Print vegetarian menu */
		void PrintVegetarianMenu();
		/* Get iterator */
		Iterator<MenuComponent*> * CreateIterator();
	private:
		MenuComponents m_menu_components;
		std::string m_name;
		std::string m_description;
};

#endif
