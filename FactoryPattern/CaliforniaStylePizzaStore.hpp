#ifndef CALIFORNIA_STYLE_PIZZA_STORE_HPP
#define CALIFORNIA_STYLE_PIZZA_STORE_HPP

#include "PizzaStore.hpp"
#include "Pizza.hpp"

class CaliforniaStylePizzaStore : public PizzaStore
{
    public:
   	CaliforniaStylePizzaStore();
	~CaliforniaStylePizzaStore();
	Pizza * createPizza(std::string type);
    private:
}; 

#endif
