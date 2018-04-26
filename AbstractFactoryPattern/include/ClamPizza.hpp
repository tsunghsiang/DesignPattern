#ifndef CLAM_PIZZA_HPP
#define CLAM_PIZZA_HPP

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class ClamPizza : public Pizza
{
    public:
	ClamPizza(PizzaIngredientFactory * factory);
	~ClamPizza();
	void prepare();
    private:
	PizzaIngredientFactory * m_ingredient_factory;
};

#endif
