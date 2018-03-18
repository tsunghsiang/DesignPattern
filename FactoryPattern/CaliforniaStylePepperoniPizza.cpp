#include "CaliforniaStylePepperoniPizza.hpp"

CaliforniaStylePepperoniPizza::CaliforniaStylePepperoniPizza()
{
    this->setName("California Style Sauce and Pepperoni Pizza");
    this->setDough("Medium Crust Dough");
    this->setSauce("San Jose Sauce"); 
    this->addToppings("Blueberry Powder"); 
}

CaliforniaStylePepperoniPizza::~CaliforniaStylePepperoniPizza()
{
    this->~Pizza();
}

void CaliforniaStylePepperoniPizza::prepare()
{
    Pizza::prepare();
}

void CaliforniaStylePepperoniPizza::bake()
{
    Pizza::bake();
}

void CaliforniaStylePepperoniPizza::cut()
{
    Pizza::cut();
}

void CaliforniaStylePepperoniPizza::box()
{
    Pizza::box();
}
