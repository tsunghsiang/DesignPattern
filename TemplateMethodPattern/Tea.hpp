#ifndef TEA_HPP
#define TEA_HPP

#include "CaffeineBeverage.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <cwctype>

class Tea : public CaffeineBeverage
{
	public:
		void Brew(){ std::cout << "Steeping the tea" << std::endl; }
		void AddCondiments(){ std::cout << "Adding Lemon" << std::endl; }
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
				std::cout << "Would you like lemon with your tea (Y/N)? ";
				std::cin >> wants;
			}

			return wants;
		}
	private:
};

using SPTR_Tea = std::shared_ptr<Tea>;

#endif
