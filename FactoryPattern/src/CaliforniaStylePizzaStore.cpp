#include "CaliforniaStylePizzaStore.hpp"
#include "CaliforniaStyleCheesePizza.hpp"
#include "CaliforniaStyleClamPizza.hpp"
#include "CaliforniaStylePepperoniPizza.hpp"
#include "CaliforniaStyleVeggiePizza.hpp"

CaliforniaStylePizzaStore::CaliforniaStylePizzaStore(){}

CaliforniaStylePizzaStore::~CaliforniaStylePizzaStore(){}

Pizza * CaliforniaStylePizzaStore::createPizza(std::string type)
{
    Pizza * pizza = NULL;

    if(type == "cheese")
	pizza = new CaliforniaStyleCheesePizza();
    else if(type == "clam")
	pizza = new CaliforniaStyleClamPizza();
    else if(type == "pepperoni")
	pizza = new CaliforniaStylePepperoniPizza();
    else if(type == "veggie")
	pizza = new CaliforniaStyleVeggiePizza();
    else
	pizza = NULL;

    return pizza;
}
