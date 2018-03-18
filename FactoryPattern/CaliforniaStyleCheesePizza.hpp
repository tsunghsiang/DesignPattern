#ifndef CALIFORNIA_STYLE_CHEESE_PIZZA_HPP
#define CALIFORNIA_STYLE_CHEESE_PIZZA_HPP

#include "Pizza.hpp"

class CaliforniaStyleCheesePizza : public Pizza
{
    public:
	CaliforniaStyleCheesePizza();
	~CaliforniaStyleCheesePizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
