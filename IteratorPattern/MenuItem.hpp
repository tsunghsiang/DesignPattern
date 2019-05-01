#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <iostream>
#include <string>

using namespace std;

class MenuItem
{
	public:
		/* Constructor */
		MenuItem();
		MenuItem(std::string name, std::string description, bool vegetarian, double price);
		//MenuItem(MenuItem & item);
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
	private:
		std::string m_name;
		std::string m_description;
		bool m_vegetarian;
		double m_price;	
};

#endif
