#ifndef CA_PIZZA_INGREDIENT_FACTORY_HPP
#define CA_PIZZA_INGREDIENT_FACTORY_HPP

#include "PizzaIngredientFactory.hpp"

class CaliforniaPizzaIngredientFactory : public PizzaIngredientFactory
{
    public:
	~CaliforniaPizzaIngredientFactory();
	Dough * createDough();
	Sauce * createSauce();
	Cheese * createCheese();
	IterVeggies createVeggies();
	Pepperoni * createPepperoni();
	Clams * createClam();
    private:
	Dough * m_douph_ptr;
	Sauce * m_sauce_ptr;
	Cheese * m_cheese_ptr;
	Pepperoni * m_pepperoni_ptr;
	Clams * m_clams_ptr;
	std::list<Veggies *> m_veggies;
};

#endif
