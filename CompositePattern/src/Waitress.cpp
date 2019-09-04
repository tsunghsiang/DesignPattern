#include "Waitress.hpp"

Waitress::Waitress(MenuComponent * component): m_all_menus(component){}

Waitress::~Waitress(){ delete m_all_menus; }

void Waitress::PrintMenu()
{
	m_all_menus->Print();
}

void Waitress::PrintBreakfastMenu()
{
	// Iterator<MenuItem> * pancake_iter = m_pancake_house_menu->CreateIterator();
	// std::cout << "MENU\n----\nBREAKFAST" << std::endl;
	// PrintMenu(pancake_iter);
	// delete pancake_iter;
}

void Waitress::PrintLunchMenu()
{
	// Iterator<MenuItem> * dinner_iter = m_diner_menu->CreateIterator();	
	// std::cout << "MENU\n----\nLUNCH" << std::endl;
	// PrintMenu(dinner_iter);
	// delete dinner_iter;
}

void Waitress::PrintDinnerMenu()
{
	// Iterator<MenuItem> * cafe_iter = m_cafe_menu->CreateIterator();
	// std::cout << "MENU\n----\nDINNER" << std::endl;
	// PrintMenu(cafe_iter);
	// delete cafe_iter;
}

void Waitress::PrintVegetarianMenu()
{
	// Iterator<MenuItem> * pancake_iter = m_pancake_house_menu->CreateIterator();
	// Iterator<MenuItem> * dinner_iter = m_diner_menu->CreateIterator();
	// Iterator<MenuItem> * cafe_iter = m_cafe_menu->CreateIterator();
	// std::cout << "MENU\n----\nBREAKFAST" << std::endl;
	// PrintVegetarianMenu(pancake_iter);
	// std::cout << "\nLUNCH" << std::endl;
	// PrintVegetarianMenu(dinner_iter);
	// std::cout << "\nDINNER" << std::endl;
	// PrintVegetarianMenu(cafe_iter);

	// delete pancake_iter;
	// delete dinner_iter;
	// delete cafe_iter;
}

// bool Waitress::IsItemVegetarian(string name)
// {
// 	Iterator<MenuItem> * pancake_iter = m_pancake_house_menu->CreateIterator();
// 	Iterator<MenuItem> * diner_iter = m_diner_menu->CreateIterator();
// 	Iterator<MenuItem> * cafe_iter = m_cafe_menu->CreateIterator();

// 	bool vegetarian = IsVegetarian(pancake_iter, name) || IsVegetarian(diner_iter, name) || IsVegetarian(cafe_iter, name);

// 	delete pancake_iter;
// 	delete diner_iter;
// 	delete cafe_iter;
// 	return vegetarian;
// }

// bool Waitress::IsVegetarian(Iterator<MenuItem> * iterator, string name)
// {
// 	while(iterator->HasNext())
// 	{
// 		MenuItem item = iterator->Next();
// 		if(item.GetName().compare(name) == 0 && item.IsVegetarian())
// 			return true;
// 	}

// 	return false;
// }

// void Waitress::PrintVegetarianMenu(Iterator<MenuItem> * iterator)
// {
// 	while(iterator->HasNext())
// 	{
// 		MenuItem item = iterator->Next();
// 		if(item.IsVegetarian())
// 		{
// 			std::cout << item.GetName() << ", " << item.GetPrice() << " -- " << item.GetDescription() << std::endl;
// 		}
// 	}
// }

// void Waitress::PrintMenu(Iterator<MenuItem> * iterator)
// {
// 	while(iterator->HasNext())
// 	{
// 		MenuItem item = iterator->Next();
// 		std::cout << item.GetName() << ", " << item.GetPrice() << " -- " << item.GetDescription() << std::endl;
// 	}
// }
