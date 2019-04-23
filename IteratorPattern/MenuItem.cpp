#include "MenuItem.hpp"

MenuItem::MenuItem(	string name, 
					string description, 
					bool vegetarian, 
					double price)
	:m_name(name), m_description(description), m_vegetarian(vegetarian), m_price(price){}

MenuItem::~MenuItem(){}

string MenuItem::GetName(){ return m_name; }

string MenuItem::GetDescription(){ return m_description; }

string MenuItem::GetPrice(){ return m_price; }

bool MenuItem::IsVegetarian(){ return m_vegetarian; }
