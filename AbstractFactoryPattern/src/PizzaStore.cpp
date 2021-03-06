#include "PizzaStore.hpp"

PizzaStore::PizzaStore(){}

PizzaStore::~PizzaStore(){}

Pizza * PizzaStore::orderPizza(std::string type)
{
    Pizza * pizza = this->createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}
