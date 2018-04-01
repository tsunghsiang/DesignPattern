#ifndef CHICAGO_STYLE_CLAM_PIZZA_HPP
#define CHICAGO_STYLE_CLAM_PIZZA_HPP

#include "Pizza.hpp"

class ChicagoStyleClamPizza : public Pizza
{
    public:
	ChicagoStyleClamPizza();
	~ChicagoStyleClamPizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
