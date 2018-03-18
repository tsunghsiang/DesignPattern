#ifndef NY_STYLE_CLAM_PIZZA_HPP
#define NY_STYLE_CLAM_PIZZA_HPP

#include "Pizza.hpp"

class NYStyleClamPizza : public Pizza
{
    public:
   	NYStyleClamPizza();
	~NYStyleClamPizza();
	void prepare();
	void bake();
	void cut();
	void box();
    private:
};

#endif
