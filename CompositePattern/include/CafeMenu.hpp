#ifndef ACFE_MENU_HPP
#define CAFE_MENU_HPP

#include <string>
#include <map>
#include <utility>
#include "Menu.hpp"

using namespace std;

typedef std::map<string, MenuItem*> HashMenu;
typedef std::pair<string, MenuItem*> HashPair;

class CafeMenu : public Menu{
	public:
		/* constructor */
		CafeMenu();
		/* destructor */
		~CafeMenu();
		/* member functions */
		Iterator<MenuItem> * CreateIterator();
		void AddItem(string name, string description, bool vegetarian, double price);
		HashMenu &GetItems();
	private:
		HashMenu m_menu_items;
};

#endif
