#include "ChicagoStyleClamPizza.hpp"

ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
    this->setName("Chicago Style Deep Dish Clam Pizza");
    this->setDough("Extra Thick Crust Dough");
    this->setSauce("Plum Tomato Sauce");
    this->addToppings("Shredded Mozzarella Sauce");
}

ChicagoStyleClamPizza::~ChicagoStyleClamPizza()
{
    this->~Pizza();
}

void ChicagoStyleClamPizza::prepare()
{
    Pizza::prepare();
}

void ChicagoStyleClamPizza::bake()
{
    Pizza::bake();
}

void ChicagoStyleClamPizza::cut()
{
    Pizza::cut();
}

void ChicagoStyleClamPizza::box()
{
    Pizza::box();
}
