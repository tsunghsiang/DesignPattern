#ifndef NY_STYLE_VEGGIE_PIZZA_HPP
#define NY_STYLE_VEGGIE_PIZZA_HPP

#include "Pizza.hpp"

class NYStyleVeggiePizza : public Pizza
{
    public:
	NYStyleVeggiePizza();
	~NYStyleVeggiePizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
