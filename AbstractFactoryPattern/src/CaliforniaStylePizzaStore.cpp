#include "CaliforniaStylePizzaStore.hpp"
#include "CheesePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include "CaliforniaPizzaIngredientFactory.hpp"

CaliforniaStylePizzaStore::CaliforniaStylePizzaStore(){}

CaliforniaStylePizzaStore::~CaliforniaStylePizzaStore(){}

Pizza * CaliforniaStylePizzaStore::createPizza(std::string type)
{
    Pizza * pizza = NULL;
    PizzaIngredientFactory * factory = new CaliforniaPizzaIngredientFactory();

    if(type == "cheese")
    {
	pizza = new CheesePizza(factory);
	pizza->setName("California Style Cheese Pizza");
    }
    else if(type == "clam")
    {
	pizza = new ClamPizza(factory);
	pizza->setName("California Style Clam Pizza");
    }
    else if(type == "pepperoni")
    {
	pizza = new PepperoniPizza(factory);
	pizza->setName("California Style Pepperoni Pizza");
    }
    else if(type == "veggie")
    {
	pizza = new VeggiePizza(factory);
	pizza->setName("California Style Veggie Pizza");
    }
    else
    {
	pizza = NULL;
	delete factory;
    }

    return pizza;
}
