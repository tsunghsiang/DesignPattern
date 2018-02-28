#include "PizzaStore.hpp"

PizzaStore::PizzaStore(SimplePizzaFactory * factory)
{
    this->m_factory = factory;
}

PizzaStore::~PizzaStore()
{
    delete this->m_factory;
}

Pizza * PizzaStore::orderPizza(std::string type)
{
    Pizza * pizza = this->m_factory->createPizza(type);
    pizza->prepare();
    pizza->cut();
    pizza->box();
    return pizza;
}
