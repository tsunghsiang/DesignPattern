#ifndef CHICAGO_STYLE_CHEESE_PIZZA_HPP
#define CHICAGO_STYLE_CHEESE_PIZZA_HPP

#include "Pizza.hpp"

class ChicagoStyleCheesePizza : public Pizza
{
    public:
	ChicagoStyleCheesePizza();
	~ChicagoStyleCheesePizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
