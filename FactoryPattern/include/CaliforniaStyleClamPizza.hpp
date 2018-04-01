#ifndef CALIFORNIA_STYLE_CLAM_PIZZA_HPP
#define CALIFORNIA_STYLE_CLAM_PIZZA_HPP

#include "Pizza.hpp"

class CaliforniaStyleClamPizza : public Pizza
{
    public:
	CaliforniaStyleClamPizza();
	~CaliforniaStyleClamPizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
