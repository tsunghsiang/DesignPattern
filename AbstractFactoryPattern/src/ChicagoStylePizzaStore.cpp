#include "ChicagoStylePizzaStore.hpp"
#include "CheesePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include "ChicagoPizzaIngredientFactory.hpp"

ChicagoStylePizzaStore::ChicagoStylePizzaStore(){}

ChicagoStylePizzaStore::~ChicagoStylePizzaStore(){}

Pizza * ChicagoStylePizzaStore::createPizza(std::string type)
{
    Pizza * pizza = NULL;
    PizzaIngredientFactory * factory = new ChicagoPizzaIngredientFactory();

    if(type == "cheese")
    {
	pizza = new CheesePizza(factory);
	pizza->setName("Chicago Style Cheese Pizza");
    }
    else if(type == "clam")
    {
	pizza = new ClamPizza(factory);
	pizza->setName("Chicago Style Clam Pizza");
    }
    else if(type == "pepperoni")
    {
	pizza = new PepperoniPizza(factory);
	pizza->setName("Chicago Style Pepperoni Pizza");
    }
    else if(type == "veggie")
    {
	pizza = new VeggiePizza(factory);
	pizza->setName("Chicago Style Veggie Pizza");
    }
    else
    {
	pizza = NULL;
	delete factory;
    }

    return pizza;
}
