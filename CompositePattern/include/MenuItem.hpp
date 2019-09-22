#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <iostream>
#include <string>
#include "MenuComponent.hpp"
#include "Iterator.hpp"

using namespace std;

class MenuItem : public MenuComponent
{
	public:
		/* Constructor */
		MenuItem();
		MenuItem(std::string name, std::string description, bool vegetarian, double price);
		/* Destructor */
		~MenuItem();
		/* Get name of the item */
		string GetName();
		/* Get description of the item */
		string GetDescription();
		/* Get price of the item */
		double GetPrice();
		/* Check if the item is vegetarian */
		bool IsVegetarian();
		/* Print the menu item information */
		void Print();
		/* Get iterator */
		Iterator<MenuComponent> * CreateIterator();
	private:
		std::string m_name;
		std::string m_description;
		bool m_vegetarian;
		double m_price;	
};

#endif
