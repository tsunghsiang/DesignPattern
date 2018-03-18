#include "NYStyleClamPizza.hpp"

NYStyleClamPizza::NYStyleClamPizza()
{
    this->setName("NY Style Sauce and Clam Pizza");
    this->setDough("Thin Crust Dough");
    this->setSauce("Marinara Sauce");
    this->addToppings("Grated Reggiano Clam");
}

NYStyleClamPizza::~NYStyleClamPizza()
{
    this->~Pizza();
}

void NYStyleClamPizza::prepare()
{
    Pizza::prepare();
}

void NYStyleClamPizza::bake()
{
    Pizza::bake();
}

void NYStyleClamPizza::cut()
{
    Pizza::cut();
}

void NYStyleClamPizza::box()
{
    Pizza::box();
}
