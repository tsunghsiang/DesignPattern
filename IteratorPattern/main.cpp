#include <iostream>
#include "PancakeHouseMenu.hpp"
#include "DinerMenu.hpp"
#include "Iterator.hpp"
#include "MenuItem.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	PancakeHouseMenu pancake_house_menu;
	DinerMenu diner_menu;
	Iterator<MenuItem> * diner_iter = diner_menu.CreateIterator();
	Iterator<MenuItem> * pancake_iter = pancake_house_menu.CreateIterator();
	while(diner_iter->HasNext())
	{
		MenuItem item = diner_iter->Next();
		cout << item.GetName() << endl;
	}

	while(pancake_iter->HasNext())
	{
		MenuItem item = pancake_iter->Next();
		cout << item.GetName() << endl;
	}

	delete diner_iter;	
	delete pancake_iter;
	return 0;
}
