#include <iostream>
#include "PizzaStore.hpp"
#include "SimplePizzaFactory.hpp"
#include "Pizza.hpp"

int main(int argc, char* argv[])
{
    PizzaStore * ps = new PizzaStore(new SimplePizzaFactory());
    Pizza * pizza = ps->orderPizza("clam");
    delete pizza;
    delete ps;

    return 0;
}
