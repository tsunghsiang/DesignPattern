#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include "SimplePizzaFactory.hpp"
#include "Pizza.hpp"

class PizzaStore
{
    public:
	PizzaStore(SimplePizzaFactory * factory);
	~PizzaStore();
        Pizza * orderPizza(std::string type);
    private:
	SimplePizzaFactory * m_factory;
};

#endif
