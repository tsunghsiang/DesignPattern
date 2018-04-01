#include "ChicagoStylePepperoniPizza.hpp"

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
    this->setName("Chicago Style Deep Dish Pepperoni Pizza");
    this->setDough("Extra Thick Crust Dough");
    this->setSauce("Plum Tomato Sauce");
    this->addToppings("Shredded Mozzarella Sauce");
}

ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza()
{
    this->~Pizza();
}

void ChicagoStylePepperoniPizza::prepare()
{
    Pizza::prepare();
}

void ChicagoStylePepperoniPizza::bake()
{
    Pizza::bake();
}

void ChicagoStylePepperoniPizza::cut()
{
    Pizza::cut();
}

void ChicagoStylePepperoniPizza::box()
{
    Pizza::box();
}
