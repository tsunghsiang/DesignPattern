#include "CafeMenu.hpp"

CafeMenu::CafeMenu(){
	AddItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, letuce, tomato, and fries", true, 3.99);
	AddItem("Soup of the day", "A cup of the soup of the day, with a side salad", false, 3.69);
	AddItem("Burrito", "A large burrito, with whole pinto beans, salsa, guacamole", true, 4.29);
}

CafeMenu::~CafeMenu(){
	for(HashMenu::iterator it = m_menu_items.begin(); it != m_menu_items.end(); it++)
		delete it->second;
	m_menu_items.clear();
}

void CafeMenu::AddItem(string name, string description, bool vegetarian, double price){
	MenuItem *item = new MenuItem(name, description, vegetarian, price);
	m_menu_items.insert(HashPair{ name, item });	
}

HashMenu &CafeMenu::GetItems(){ return m_menu_items; }
