#include "Waitress.hpp"

Waitress::Waitress(Menu * pancake_house_menu, Menu * diner_menu): m_pancake_house_menu(pancake_house_menu), m_diner_menu(diner_menu){}

Waitress::~Waitress(){}

void Waitress::PrintMenu()
{
	Iterator<MenuItem> * pancake_iter = m_pancake_house_menu->CreateIterator();
	Iterator<MenuItem> * diner_iter = m_diner_menu->CreateIterator();
	std::cout << "MENU\n----\nBREAKFAST" << std::endl;
	PrintMenu(pancake_iter);
	std::cout << "\nLUNCH" << std::endl;
	PrintMenu(diner_iter);

	delete pancake_iter;
	delete diner_iter;	
}

void Waitress::PrintBreakfastMenu()
{
	Iterator<MenuItem> * pancake_iter = m_pancake_house_menu->CreateIterator();
	std::cout << "MENU\n----\nBREAKFAST" << std::endl;
	PrintMenu(pancake_iter);
	delete pancake_iter;
}

void Waitress::PrintLunchMenu()
{
	Iterator<MenuItem> * diner_iter = m_diner_menu->CreateIterator();
	std::cout << "MENU\n----\nLUNCH" << std::endl;
	PrintMenu(diner_iter);
	delete diner_iter;
}

void Waitress::PrintVegetarianMenu()
{
	Iterator<MenuItem> * pancake_iter = m_pancake_house_menu->CreateIterator();
	Iterator<MenuItem> * diner_iter = m_diner_menu->CreateIterator();
	std::cout << "MENU\n----\nBREAKFAST" << std::endl;
	PrintVegetarianMenu(pancake_iter);
	std::cout << "\nLUNCH" << std::endl;
	PrintVegetarianMenu(diner_iter);

	delete pancake_iter;
	delete diner_iter;
}

bool Waitress::IsItemVegetarian(string name)
{
	Iterator<MenuItem> * pancake_iter = m_pancake_house_menu->CreateIterator();
	Iterator<MenuItem> * diner_iter = m_diner_menu->CreateIterator();
	bool vegetarian = IsVegetarian(pancake_iter, name) || IsVegetarian(diner_iter, name);
	delete pancake_iter;
	delete diner_iter;
	return vegetarian;
}

bool Waitress::IsVegetarian(Iterator<MenuItem> * iterator, string name)
{
	while(iterator->HasNext())
	{
		MenuItem item = iterator->Next();
		if(item.GetName().compare(name) == 0 && item.IsVegetarian())
			return true;
	}

	return false;
}

void Waitress::PrintVegetarianMenu(Iterator<MenuItem> * iterator)
{
	while(iterator->HasNext())
	{
		MenuItem item = iterator->Next();
		if(item.IsVegetarian())
		{
			std::cout << item.GetName() << ", " << item.GetPrice() << " -- " << item.GetDescription() << std::endl;
		}
	}
}

void Waitress::PrintMenu(Iterator<MenuItem> * iterator)
{
	while(iterator->HasNext())
	{
		MenuItem item = iterator->Next();
		std::cout << item.GetName() << ", " << item.GetPrice() << " -- " << item.GetDescription() << std::endl;
	}
}
