#include "DinerMenu.hpp"

DinerMenu::DinerMenu()
{
	AddItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
	AddItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
	AddItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
	AddItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05);	
	// A couple of items added here
}

DinerMenu::~DinerMenu(){}

void DinerMenu::AddItem(string name, string description, bool vegetarian, double price){
	if(m_num_of_items >= MAX_ITEMS)
	{
		throw std::runtime_error("Sorry, menu is full! Can't ass item to menu");	
	}
	else
	{
		MenuItem item(name, description, vegetarian, price);
		m_menu_items[m_num_of_items] = item;
		m_num_of_items++;
	}
}

MenuItem * DinerMenu::GetMenuItems(){ return m_menu_items; }

