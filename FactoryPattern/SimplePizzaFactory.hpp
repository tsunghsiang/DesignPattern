#ifndef SIMPLE_PIZZA_FACTORY_HPP
#define SIMPLE_PIZZA_FACTORY_HPP

#include "Pizza.hpp"
#include "CheesePizza.hpp"
#include "PepperoniPizza.hpp"
#include "ClamPizza.hpp"
#include "VeggiePizza.hpp"
#include <iostream>
#include <string>

class SimplePizzaFactory
{
    public:
	Pizza * createPizza(std::string type);	        
    private:
};

#endif 
