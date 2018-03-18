#include "CaliforniaStyleVeggiePizza.hpp"

CaliforniaStyleVeggiePizza::CaliforniaStyleVeggiePizza()
{
    this->setName("California Style Sauce and Veggie Pizza");
    this->setDough("Medium Crust Dough");
    this->setSauce("San Jose Sauce");
    this->addToppings("Salty noodles");
}

CaliforniaStyleVeggiePizza::~CaliforniaStyleVeggiePizza()
{
    this->~Pizza();
}

void CaliforniaStyleVeggiePizza::prepare()
{
    Pizza::prepare();
}

void CaliforniaStyleVeggiePizza::bake()
{
    Pizza::bake();
}

void CaliforniaStyleVeggiePizza::cut()
{
    Pizza::cut();
}

void CaliforniaStyleVeggiePizza::box()
{
    Pizza::box();
}
