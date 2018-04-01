#include "NYStylePepperoniPizza.hpp"

NYStylePepperoniPizza::NYStylePepperoniPizza()
{
    this->setName("NY Style Sauce and Pepperoni Pizza");
    this->setDough("Thin Crust Dough");
    this->setSauce("Marinara Sauce"); 
    this->addToppings("Grated Reggiano Salmon");
}

NYStylePepperoniPizza::~NYStylePepperoniPizza()
{
    this->~Pizza();
}

void NYStylePepperoniPizza::prepare()
{
    Pizza::prepare();
}

void NYStylePepperoniPizza::bake()
{
    Pizza::bake();
}

void NYStylePepperoniPizza::cut()
{
    Pizza::cut();
}

void NYStylePepperoniPizza::box()
{
    Pizza::box();
}
