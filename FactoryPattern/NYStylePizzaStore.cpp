#include "NYStylePizzaStore.hpp"
#include "NYStyleCheesePizza.hpp"
#include "NYStyleClamPizza.hpp"
#include "NYStylePepperoniPizza.hpp"
#include "NYStyleVeggiePizza.hpp"

NYStylePizzaStore::NYStylePizzaStore(){}

NYStylePizzaStore::~NYStylePizzaStore(){}

Pizza * NYStylePizzaStore::createPizza(std::string type)
{
    Pizza * pizza = NULL;

    if(type == "cheese")
	pizza = new NYStyleCheesePizza();
    else if(type == "clam")
	pizza = new NYStyleClamPizza();
    else if(type == "pepperoni")
	pizza = new NYStylePepperoniPizza();
    else if(type == "veggie")
	pizza = new NYStyleVeggiePizza();
    else
	pizza = NULL;

    return pizza;
}
