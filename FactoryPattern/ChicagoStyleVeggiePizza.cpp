#include "ChicagoStyleVeggiePizza.hpp"

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
    this->setName("Chicago Style Deep Dish Veggie Pizza");
    this->setDough("Extra Thick Crust Dough");
    this->setSauce("Plum Tomato Sauce");
    this->addToppings("Shredded Mozzarella Sauce");
}

ChicagoStyleVeggiePizza::~ChicagoStyleVeggiePizza()
{
    this->~Pizza();
}

void ChicagoStyleVeggiePizza::prepare()
{
    Pizza::prepare();
}

void ChicagoStyleVeggiePizza::bake()
{
    Pizza::bake();
}

void ChicagoStyleVeggiePizza::cut()
{
    Pizza::cut();
}

void ChicagoStyleVeggiePizza::box()
{
    Pizza::box();
}
