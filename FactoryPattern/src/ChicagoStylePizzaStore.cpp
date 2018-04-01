#include "ChicagoStylePizzaStore.hpp"
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStyleClamPizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"
#include "ChicagoStyleVeggiePizza.hpp"

ChicagoStylePizzaStore::ChicagoStylePizzaStore(){}

ChicagoStylePizzaStore::~ChicagoStylePizzaStore(){}

Pizza * ChicagoStylePizzaStore::createPizza(std::string type)
{
    Pizza * pizza = NULL;

    if(type == "cheese")
	pizza = new ChicagoStyleCheesePizza();
    else if(type == "clam")
	pizza = new ChicagoStyleClamPizza();
    else if(type == "pepperoni")
	pizza = new ChicagoStylePepperoniPizza();
    else if(type == "veggie")
	pizza = new ChicagoStyleVeggiePizza();
    else
	pizza = NULL;

    return pizza;
}
