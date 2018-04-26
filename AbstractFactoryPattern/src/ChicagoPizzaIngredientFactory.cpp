#include "ChicagoPizzaIngredientFactory.hpp"
#include "ThickCrustDough.hpp"
#include "PlumTomatoSauce.hpp"
#include "MozzarellaCheese.hpp"
#include "SlicedPepperoni.hpp"
#include "FrozenClams.hpp"
#include "Spinach.hpp"
#include "EggPlant.hpp"
#include "BlackOlive.hpp"

ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory()
{
    delete this->m_douph_ptr;
    delete this->m_sauce_ptr;
    delete this->m_cheese_ptr;
    delete this->m_pepperoni_ptr;
    delete this->m_clams_ptr;
    IterVeggies it = this->m_veggies.begin();
    while(it != this->m_veggies.end())
	delete (*it++);
    this->m_veggies.clear();
}

Dough * ChicagoPizzaIngredientFactory::createDough()
{
    this->m_douph_ptr = new ThickCrustDough();
    return this->m_douph_ptr;
}

Sauce * ChicagoPizzaIngredientFactory::createSauce()
{
    this->m_sauce_ptr = new PlumTomatoSauce();
    return this->m_sauce_ptr;
}

Cheese * ChicagoPizzaIngredientFactory::createCheese()
{
    this->m_cheese_ptr = new MozzarellaCheese();
    return this->m_cheese_ptr;
}

IterVeggies ChicagoPizzaIngredientFactory::createVeggies()
{
    this->m_veggies.push_back(new Spinach());
    this->m_veggies.push_back(new EggPlant());
    this->m_veggies.push_back(new BlackOlive());
    return this->m_veggies.begin();
}

Pepperoni * ChicagoPizzaIngredientFactory::createPepperoni()
{
    this->m_pepperoni_ptr = new SlicedPepperoni();
    return this->m_pepperoni_ptr;
}

Clams * ChicagoPizzaIngredientFactory::createClam()
{
    this->m_clams_ptr = new FrozenClams();
    return this->m_clams_ptr;
}
