#include "PepperoniPizza.hpp"

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory * factory)
{
    this->m_ingredient_factory = factory;
}

PepperoniPizza::~PepperoniPizza()
{
    delete this->m_ingredient_factory;
}

void PepperoniPizza::prepare()
{
    std::cout << "Preparing " << this->m_name << std::endl; 
    this->m_ingre_dough     = this->m_ingredient_factory->createDough();
    this->m_ingre_sauce     = this->m_ingredient_factory->createSauce();
    this->m_ingre_cheese    = this->m_ingredient_factory->createCheese();
    this->m_ingre_veg       = this->m_ingredient_factory->createVeggies();
    this->m_ingre_clams     = this->m_ingredient_factory->createClam();
    this->m_ingre_pepperoni = this->m_ingredient_factory->createPepperoni();
}
