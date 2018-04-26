#ifndef PEPPERONI_PIZZA_HPP
#define PEPPERONI_PIZZA_HPP

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class PepperoniPizza : public Pizza
{
    public:
	PepperoniPizza(PizzaIngredientFactory * factory);
	~PepperoniPizza();
	void prepare();
    private:
	PizzaIngredientFactory * m_ingredient_factory;
};

#endif
