#include "CaliforniaStyleCheesePizza.hpp"

CaliforniaStyleCheesePizza::CaliforniaStyleCheesePizza()
{
    this->setName("California Style Sauce and Cheese Pizza");
    this->setDough("Medium Crust Dough");
    this->setSauce("San Jose Sauce");
    this->addToppings("Blueberry Cheese");
}

CaliforniaStyleCheesePizza::~CaliforniaStyleCheesePizza()
{
    this->~Pizza();
}

void CaliforniaStyleCheesePizza::prepare()
{
    Pizza::prepare();   
}

void CaliforniaStyleCheesePizza::bake()
{
    Pizza::bake();   
}

void CaliforniaStyleCheesePizza::cut()
{
    Pizza::cut();
}

void CaliforniaStyleCheesePizza::box()
{
    Pizza::box();
}
