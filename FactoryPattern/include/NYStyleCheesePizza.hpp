#ifndef NY_STYLE_CHEESE_PIZZA_HPP
#define NY_STYLE_CHEESE_PIZZA_HPP

#include "Pizza.hpp"

class NYStyleCheesePizza : public Pizza
{
    public:
	NYStyleCheesePizza();
	~NYStyleCheesePizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
