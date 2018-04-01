#ifndef CHICAGO_STYLE_PEPPERONI_PIZZA_HPP
#define CHICAGO_STYLE_PEPPERONI_PIZZA_HPP

#include "Pizza.hpp"

class ChicagoStylePepperoniPizza : public Pizza
{
    public:
	ChicagoStylePepperoniPizza();
	~ChicagoStylePepperoniPizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif

