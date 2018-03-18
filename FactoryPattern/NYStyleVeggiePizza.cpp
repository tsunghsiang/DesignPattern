#include "NYStyleVeggiePizza.hpp"

NYStyleVeggiePizza::NYStyleVeggiePizza()
{
    this->setName("NY Style Sauce and Veggie Pizza");
    this->setDough("Thin Crust Dough");
    this->setSauce("Marinara Sauce");
    this->addToppings("Grated Reggiano noodles");    
}

NYStyleVeggiePizza::~NYStyleVeggiePizza()
{
    this->~Pizza();
}

void NYStyleVeggiePizza::prepare()
{
    Pizza::prepare();
}

void NYStyleVeggiePizza::bake()
{
    Pizza::bake();
}

void NYStyleVeggiePizza::cut()
{
    Pizza::cut();
}

void NYStyleVeggiePizza::box()
{
    Pizza::box();
}
