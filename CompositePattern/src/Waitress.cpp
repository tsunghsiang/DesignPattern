#include "Waitress.hpp"

Waitress::Waitress(MenuComponent * component): m_all_menus(component){}

Waitress::~Waitress(){ delete m_all_menus; }

void Waitress::PrintMenu()
{
	m_all_menus->Print();
}

void Waitress::PrintVegetarianMenu()
{
	Iterator<MenuComponent*> * it = m_all_menus->CreateIterator();
	std::cout << "\nVEGETARIAN MENU\n----\n";
	while(it->HasNext())
	{
		MenuComponent * component = it->Next();
		try
		{
			component->PrintVegetarianMenu();
		}
		catch(std::exception &e){}		
	}
	delete it;
}
