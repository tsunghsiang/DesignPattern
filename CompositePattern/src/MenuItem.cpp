#include "MenuItem.hpp"

MenuItem::MenuItem(){}

MenuItem::MenuItem(	std::string name, 
					std::string description, 
					bool vegetarian, 
					double price )
	:m_name(name), m_description(description), m_vegetarian(vegetarian), m_price(price){}

MenuItem::~MenuItem(){}

std::string MenuItem::GetName(){ return m_name; }

std::string MenuItem::GetDescription(){ return m_description; }

double MenuItem::GetPrice(){ return m_price; }

bool MenuItem::IsVegetarian(){ return m_vegetarian; }

void MenuItem::Print()
{
	std::cout << " " << GetName();
   	if(IsVegetarian())
		std::cout << "(v)";
	std::cout << ", " << GetPrice() << std::endl;
  	std::cout << "	-- " << GetDescription() << std::endl;	
}
