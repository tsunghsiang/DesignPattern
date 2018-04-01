#ifndef CALIFORNIA_STYLE_PEPPERONI_PIZZA_HPP
#define CALIFORNIA_STYLE_PEPPERONI_PIZZA_HPP

#include "Pizza.hpp"

class CaliforniaStylePepperoniPizza : public Pizza
{
    public:
	CaliforniaStylePepperoniPizza();
	~CaliforniaStylePepperoniPizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif

