#include "CaffeineBeverage.hpp"
#include "Tea.hpp"
#include "Coffee.hpp"
#include <iostream>
#include <memory>

int main(int argc, char * argv[])
{	
	SPTR_Tea tea = std::make_shared<Tea>();
	std::cout << "Making tea ...\n";
	tea->PrepareReceipe();

	std::cout << "\n";

	SPTR_Coffee coffee = std::make_shared<Coffee>();
	std::cout << "Making coffee ...\n";
	coffee->PrepareReceipe();

	return 0;
}
