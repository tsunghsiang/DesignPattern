#ifndef CHICAGO_STYLE_PIZZA_STORE_HPP
#define CHICAGO_STYLE_PIZZA_STORE_HPP

#include "PizzaStore.hpp"
#include "Pizza.hpp"

class ChicagoStylePizzaStore : public PizzaStore
{
    public:
   	ChicagoStylePizzaStore();
	~ChicagoStylePizzaStore();
	Pizza * createPizza(std::string type);
    private:
}; 

#endif
