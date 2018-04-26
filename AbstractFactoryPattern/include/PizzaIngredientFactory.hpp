#ifndef PIZZA_INGREDIENT_FACTORY_HPP
#define PIZZA_INGREDIENT_FACTORY_HPP

#include "Dough.hpp"
#include "Clams.hpp"
#include "Veggies.hpp"
#include "Pepperoni.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include <list>

typedef std::list<Veggies *>::iterator IterVeggies;

class PizzaIngredientFactory
{
    public:
	virtual ~PizzaIngredientFactory(){};
	virtual Dough * createDough() = 0;
	virtual Sauce * createSauce() = 0;
	virtual Cheese * createCheese() = 0;
	virtual IterVeggies createVeggies() = 0;
	virtual Pepperoni * createPepperoni() = 0;
	virtual Clams * createClam() = 0;
    private:
};

#endif
