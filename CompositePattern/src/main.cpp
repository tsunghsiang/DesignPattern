#include <iostream>
#include "Menu.hpp"
#include "TypeDef.hpp"
#include "Waitress.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	MenuComponent * pancake_house_menu = new Menu("PANCAKE HOUSE MENU", "Breakfast");
	MenuComponent * diner_menu = new Menu("DINER MENU", "Lunch");
	MenuComponent * cafe_menu = new Menu("CAFE MENU", "Dinner");
	MenuComponent * dessert_menu = new Menu("DESSERT MENU", "Dessert of course!");
	MenuComponent * all_menus = new Menu("ALL MENUS","All menus combined");
	
	all_menus->Add(pancake_house_menu);
	all_menus->Add(diner_menu);
	all_menus->Add(cafe_menu);

	// Add menu items here

	pancake_house_menu->Add(new MenuItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99));
	pancake_house_menu->Add(new MenuItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99));
	pancake_house_menu->Add(new MenuItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49));
	pancake_house_menu->Add(new MenuItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59));

	diner_menu->Add(new MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.9));
	diner_menu->Add(new MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99));
	diner_menu->Add(new MenuItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29));
	diner_menu->Add(new MenuItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05));
	diner_menu->Add(new MenuItem("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", true, 3.99));
	diner_menu->Add(new MenuItem("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", false, 3.89));

	cafe_menu->Add(new MenuItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, letuce, tomato, and fries", true, 3.99));
	cafe_menu->Add(new MenuItem("Soup of the day", "A cup of the soup of the day, with a side salad", false, 3.69));
	cafe_menu->Add(new MenuItem("Burrito", "A large burrito, with whole pinto beans, salsa, guacamole", true, 4.29));
	
	dessert_menu->Add(new MenuItem("Apple Pie", "Apple pie with a flasky crust, topped with vanilla icecream", true, 1.59));
	dessert_menu->Add(new MenuItem("Cheesecake", "Creamy New York cheesecake, with a chocolate grham crust", true, 1.99));
	dessert_menu->Add(new MenuItem("Sorbet", "A scoop of raspberry and a scoop of lime", true, 1.89));
	diner_menu->Add(dessert_menu);

	Waitress * waitress = new Waitress(all_menus);
	// waitress->PrintMenu();
	waitress->PrintVegetarianMenu();
	delete waitress;
	return 0;
}
