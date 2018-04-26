#include "NYPizzaIngredientFactory.hpp"
#include "ThinCrustDough.hpp"
#include "MarinaraSauce.hpp"
#include "ReggianaCheese.hpp"
#include "SlicedPepperoni.hpp"
#include "FreshClams.hpp"
#include "Garlic.hpp"
#include "Onion.hpp"
#include "Mushroom.hpp"
#include "RedPepper.hpp"

NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
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

Dough * NYPizzaIngredientFactory::createDough()
{
    this->m_douph_ptr = new ThinCrustDough();
    return this->m_douph_ptr;
}

Sauce * NYPizzaIngredientFactory::createSauce()
{
    this->m_sauce_ptr = new MarinaraSauce();
    return this->m_sauce_ptr;
}

Cheese * NYPizzaIngredientFactory::createCheese()
{
    this->m_cheese_ptr = new ReggianaCheese();
    return this->m_cheese_ptr;
}

IterVeggies NYPizzaIngredientFactory::createVeggies()
{
    this->m_veggies.push_back(new Garlic());
    this->m_veggies.push_back(new Onion());
    this->m_veggies.push_back(new Mushroom());
    this->m_veggies.push_back(new RedPepper()); 
    return this->m_veggies.begin();
}

Pepperoni * NYPizzaIngredientFactory::createPepperoni()
{
    this->m_pepperoni_ptr = new SlicedPepperoni();
    return this->m_pepperoni_ptr;
}

Clams * NYPizzaIngredientFactory::createClam()
{
    this->m_clams_ptr = new FreshClams();
    return this->m_clams_ptr;
}
