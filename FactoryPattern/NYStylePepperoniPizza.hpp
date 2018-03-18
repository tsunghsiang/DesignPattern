#ifndef NY_STYLE_PEPPERONI_PIZZA_HPP
#define NY_STYLE_PEPPERONI_PIZZA_HPP

#include "Pizza.hpp"

class NYStylePepperoniPizza : public Pizza
{
    public:
	NYStylePepperoniPizza();
	~NYStylePepperoniPizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif

