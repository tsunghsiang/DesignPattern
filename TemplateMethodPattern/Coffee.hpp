#ifndef COFFEE_HPP
#define COFFEE_HPP

#include "CaffeineBeverage.hpp"
#include <iostream>
#include <memory>
#include <string>

class Coffee : public CaffeineBeverage
{
	void Brew(){ std::cout << "Dripping Coffee through filter" << std::endl; }
	void AddCondiments(){ std::cout << "Adding Sugar and Milk" << std::endl; }
	bool CustomerWantsCondiments()
	{
		std::string wants = GetUserInput();

		if(wants.compare("Y") == 0)
			return true;	
		else
			return false;
	}
	std::string GetUserInput()
	{
		std::string wants;

		while(wants.compare("Y") != 0 && wants.compare("N") != 0)
		{
			std::cout << "Would you like milk and sugar with your coffee (Y/N)? ";
			std::cin >> wants;
		}	

		return wants;
	}
};

using SPTR_Coffee = std::shared_ptr<Coffee>;

#endif
