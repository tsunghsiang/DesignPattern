#include "CaffeineBeverage.hpp"
#include "Tea.hpp"
#include "Coffee.hpp"
#include <iostream>
#include <memory>

int main(int argc, char * argv[])
{
	SPTR_Beverage beverage;
	
	beverage = std::make_shared<Tea>();
	std::cout << "Making tea ...\n";
	beverage->PrepareReceipe();

	std::cout << "\n";

	beverage = std::make_shared<Coffee>();
	std::cout << "Making coffee ...\n";
	beverage->PrepareReceipe();

	return 0;
}
