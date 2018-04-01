#include "CaliforniaStyleClamPizza.hpp"

CaliforniaStyleClamPizza::CaliforniaStyleClamPizza()
{
    this->setName("California Style Sauce and Clam Pizza");
    this->setDough("California Dough");
    this->setSauce("Mexico Sauce");
    this->addToppings("California Clam");
}

CaliforniaStyleClamPizza::~CaliforniaStyleClamPizza()
{
    this->~Pizza();
}

void CaliforniaStyleClamPizza::prepare()
{
    Pizza::prepare();
}

void CaliforniaStyleClamPizza::bake()
{
    Pizza::bake();
}

void CaliforniaStyleClamPizza::cut()
{
    Pizza::cut();
}

void CaliforniaStyleClamPizza::box()
{
    Pizza::box();
}
