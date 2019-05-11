#include <iostream>
#include "PancakeHouseMenu.hpp"
#include "DinerMenu.hpp"
#include "Iterator.hpp"
#include "MenuItem.hpp"
#include "Waitress.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	PancakeHouseMenu * pancake_house_menu = new PancakeHouseMenu();
	DinerMenu * diner_menu = new DinerMenu();
	Waitress waitress(pancake_house_menu, diner_menu);

	std::cout << "[PrintMenu]\n";
	waitress.PrintMenu();
	std::cout << "\n\n[PrintBreakfastMenu]\n";
	waitress.PrintBreakfastMenu();
	std::cout << "\n\n[PrintLunchMenu]\n";
	waitress.PrintLunchMenu();
	std::cout << "\n\n[PrintVegetarianMenu]\n";
	waitress.PrintVegetarianMenu();
	std::cout << "\n\n[IsVegetarian]\n";
	std::cout << "Item 'Vegetarian BLT' " << (waitress.IsItemVegetarian("Vegetarian BLT") ? "is vegetable\n" : "is not vegetable\n");
	std::cout << "Item 'HotDog' " << (waitress.IsItemVegetarian("HotDog") ? "is vegetable\n" : "is not vegetable\n");


	delete diner_menu;
	delete pancake_house_menu;
	return 0;
}
