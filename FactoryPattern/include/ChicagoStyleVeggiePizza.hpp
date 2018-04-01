#ifndef CHICAGO_STYLE_VEGGIE_PIZZA_HPP
#define CHICAGO_STYLE_VEGGIE_PIZZA_HPP

#include "Pizza.hpp"

class ChicagoStyleVeggiePizza : public Pizza
{
    public:
	ChicagoStyleVeggiePizza();
	~ChicagoStyleVeggiePizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
