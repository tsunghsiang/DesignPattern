#ifndef VEGGIE_PIZZA_HPP
#define VEGGIE_PIZZA_HPP

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class VeggiePizza : public Pizza
{
    public:
	VeggiePizza(PizzaIngredientFactory * factory);
	~VeggiePizza();
	void prepare();
    private:
	PizzaIngredientFactory * m_ingredient_factory;
};

#endif
