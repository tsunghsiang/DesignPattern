#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include <string>
#include "Pizza.hpp"

class PizzaStore
{
    public:
	PizzaStore();
	~PizzaStore();
        Pizza * orderPizza(std::string type);
	virtual Pizza * createPizza(std::string type) = 0;
    private:
};

#endif
