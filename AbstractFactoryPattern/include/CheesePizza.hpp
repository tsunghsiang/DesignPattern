#ifndef CHEESE_PIZZA_HPP
#define CHEESE_PIZZA_HPP

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class CheesePizza : public Pizza
{
    public:
	CheesePizza(PizzaIngredientFactory * factory);
	~CheesePizza();
	void prepare();
    private:
	PizzaIngredientFactory * m_ingredient_factory;
};

#endif
