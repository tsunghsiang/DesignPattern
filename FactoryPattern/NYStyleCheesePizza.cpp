#include "NYStyleCheesePizza.hpp"

NYStyleCheesePizza::NYStyleCheesePizza()
{
    this->setName("NY Style Sauce and Cheese Pizza");
    this->setDough("Thin Crust Dough");
    this->setSauce("Marinara Sauce");
    this->addToppings("Grated Reggiano Cheese");
}

NYStyleCheesePizza::~NYStyleCheesePizza()
{ 
    this->~Pizza();
}

void NYStyleCheesePizza::prepare()
{
    Pizza::prepare();
}

void NYStyleCheesePizza::bake()
{
    Pizza::bake();
}

void NYStyleCheesePizza::cut()
{
    Pizza::cut();
}

void NYStyleCheesePizza::box()
{
    Pizza::box();
}
