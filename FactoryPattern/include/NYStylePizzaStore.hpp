#ifndef NY_STYLE_PIZZA_STORE_HPP
#define NY_STYLE_PIZZA_STORE_HPP

#include "PizzaStore.hpp"
#include "Pizza.hpp"

class NYStylePizzaStore : public PizzaStore
{
    public:
	NYStylePizzaStore();
	~NYStylePizzaStore();
	Pizza * createPizza(std::string type);
    private:
}; 

#endif
