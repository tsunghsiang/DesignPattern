#include <iostream>
#include "PizzaStore.hpp"
#include "NYStylePizzaStore.hpp"
#include "ChicagoStylePizzaStore.hpp"
#include "CaliforniaStylePizzaStore.hpp"
#include "Pizza.hpp"

int main(int argc, char* argv[])
{
    PizzaStore * ps = NULL;
    Pizza * pizza = NULL;

    ps = new NYStylePizzaStore();
    pizza = ps->orderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new NYStylePizzaStore();
    pizza = ps->orderPizza("clam");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new NYStylePizzaStore();
    pizza = ps->orderPizza("pepperoni");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new NYStylePizzaStore();
    pizza = ps->orderPizza("veggie");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new ChicagoStylePizzaStore();
    pizza = ps->orderPizza("cheese");
    std::cout << "Joel ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new ChicagoStylePizzaStore();
    pizza = ps->orderPizza("clam");
    std::cout << "Joel ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new ChicagoStylePizzaStore();
    pizza = ps->orderPizza("pepperoni");
    std::cout << "Joel ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new ChicagoStylePizzaStore();
    pizza = ps->orderPizza("veggie");
    std::cout << "Joel ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new CaliforniaStylePizzaStore();
    pizza = ps->orderPizza("cheese");
    std::cout << "Andy ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new CaliforniaStylePizzaStore();
    pizza = ps->orderPizza("clam");
    std::cout << "Andy ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new CaliforniaStylePizzaStore();
    pizza = ps->orderPizza("pepperoni");
    std::cout << "Andy ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    ps = new CaliforniaStylePizzaStore();
    pizza = ps->orderPizza("veggie");
    std::cout << "Andy ordered a " << pizza->getName() << "\n\n";
    delete pizza;
    delete ps;

    return 0;
}
