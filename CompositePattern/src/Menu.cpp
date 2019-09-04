#include "Menu.hpp"

Menu::Menu(){}

Menu::Menu(string name, string description):m_name(name), m_description(description){}

Menu::~Menu()
{
	MenuComponents::iterator it = m_menu_components.begin();
	while(it != m_menu_components.end())
	{
		delete (*it);
		it++;
	}
}

void Menu::Add(MenuComponent * component)
{
	m_menu_components.push_back(component);
}

void Menu::Remove(MenuComponent * component)
{
	string name = component->GetName();
	string description = component->GetDescription();
	MenuComponents::iterator it = m_menu_components.begin();
	while(it != m_menu_components.end())
	{
		if(name.compare((*it)->GetName()) == 0 && description.compare((*it)->GetDescription()) == 0)
		{
			m_menu_components.erase(it);
			return;
		}
		it++;
	}
}

MenuComponent * Menu::GetChild(int i)
{
	if(i < 0 || i >= m_menu_components.size())
		return NULL;
	return m_menu_components.at(i);
}

std::string Menu::GetName(){ return m_name; }

std::string Menu::GetDescription(){ return m_description; }

void Menu::Print()
{
	std::cout << "\n" << GetName();
	std::cout << ", " << GetDescription() << std::endl;
	std::cout << "---------------------\n";

	MenuComponents::iterator it = m_menu_components.begin();
	while(it != m_menu_components.end())
	{
		(*it)->Print();
		it++;
	}
}
