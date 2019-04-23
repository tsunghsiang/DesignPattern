#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <iostream>
#include <string>

using namespace std;

class MenuItem
{
	public:
		/* Constructor */
		MenuItem(string name, 
				 string description, 
				 bool vegetarian, 
				 double price);
		/* Destructor */
		~MenuItem();
		/* Get name of the item */
		string GetName();
		/* Get description of the item */
		string GetDescription();
		/* Get price of the item */
		string GetPrice();
		/* Check if the item is vegetarian */
		string IsVegetarian();
	private:
		string m_name;
		string m_description;
		bool m_vegetarian;
		double m_price;	
};

#endif
