#ifndef CALIFORNIA_STYLE_VEGGIE_PIZZA_HPP
#define CALIFORNIA_STYLE_VEGGIE_PIZZA_HPP

#include "Pizza.hpp"

class CaliforniaStyleVeggiePizza : public Pizza
{
    public:
	CaliforniaStyleVeggiePizza();
	~CaliforniaStyleVeggiePizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
