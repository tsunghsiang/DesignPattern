#include "NYStylePizzaStore.hpp"
#include "CheesePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include "NYPizzaIngredientFactory.hpp"

NYStylePizzaStore::NYStylePizzaStore(){}

NYStylePizzaStore::~NYStylePizzaStore(){}

Pizza * NYStylePizzaStore::createPizza(std::string type)
{
    Pizza * pizza = NULL;
    PizzaIngredientFactory * factory = new NYPizzaIngredientFactory();

    if(type == "cheese")
    {
	pizza = new CheesePizza(factory);
	pizza->setName("New York Style Cheese Pizza");
    }
    else if(type == "clam")
    {
	pizza = new ClamPizza(factory);
	pizza->setName("New York Style Clam Pizza");
    }
    else if(type == "pepperoni")
    {
	pizza = new PepperoniPizza(factory);
	pizza->setName("New York Style Pepperoni Pizza");
    }
    else if(type == "veggie")
    {
	pizza = new VeggiePizza(factory);
	pizza->setName("New Yoek Style Veggie Pizza");
    }
    else
    {
	pizza = NULL;
	delete factory;
    }

    return pizza;
}
