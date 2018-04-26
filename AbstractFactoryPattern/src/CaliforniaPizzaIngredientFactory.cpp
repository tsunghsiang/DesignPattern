#include "CaliforniaPizzaIngredientFactory.hpp"
#include "VeryThinCrustDough.hpp"
#include "BruschettaSauce.hpp"
#include "GoatCheese.hpp"
#include "CamarlClams.hpp"

CaliforniaPizzaIngredientFactory::~CaliforniaPizzaIngredientFactory()
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

Dough * CaliforniaPizzaIngredientFactory::createDough()
{
    this->m_douph_ptr = new VeryThinCrustDough();
    return this->m_douph_ptr;
}

Sauce * CaliforniaPizzaIngredientFactory::createSauce()
{
    this->m_sauce_ptr = new BruschettaSauce();
    return this->m_sauce_ptr;
}

Cheese * CaliforniaPizzaIngredientFactory::createCheese()
{
    this->m_cheese_ptr = new GoatCheese();
    return this->m_cheese_ptr;
}

IterVeggies CaliforniaPizzaIngredientFactory::createVeggies()
{ 
    return this->m_veggies.begin();
}

Pepperoni * CaliforniaPizzaIngredientFactory::createPepperoni()
{
    this->m_pepperoni_ptr = NULL;
    return this->m_pepperoni_ptr;
}

Clams * CaliforniaPizzaIngredientFactory::createClam()
{
    this->m_clams_ptr = new CamarlClams();
    return this->m_clams_ptr;
}
