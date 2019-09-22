#include "CafeMenu.hpp"

CafeMenu::CafeMenu(){}

CafeMenu::~CafeMenu()
{
	// for(HashMenu::iterator it = m_menu_items.begin(); it != m_menu_items.end(); it++)
	// 	delete it->second;
	// m_menu_items.clear();
}

// Iterator<MenuItem> * CafeMenu::CreateIterator()
// {
// 	return new CafeMenuIterator(m_menu_items.begin(), m_menu_items.size());
// }

// void CafeMenu::AddItem(string name, string description, bool vegetarian, double price)
// {
// 	MenuItem *item = new MenuItem(name, description, vegetarian, price);
// 	m_menu_items.insert(HashPair{ name, item });	
// }
