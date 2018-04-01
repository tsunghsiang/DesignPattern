#include "ChicagoStyleCheesePizza.hpp"

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    this->setName("Chicago Style Deep Dish Cheese Pizza");
    this->setDough("Extra Thick Crust Dough");
    this->setSauce("Plum Tomato Sauce");
    this->addToppings("Shredded Mozzarella Sauce");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
    this->~Pizza();
}

void ChicagoStyleCheesePizza::prepare()
{
    Pizza::prepare();
}

void ChicagoStyleCheesePizza::bake()
{
    Pizza::bake();
}

void ChicagoStyleCheesePizza::cut()
{
    std::cout << "Cutting the pizza into square slices" << std::endl;
}

void ChicagoStyleCheesePizza::box()
{
    Pizza::box();
}

