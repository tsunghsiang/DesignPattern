#ifndef GOAT_CHEESE_HPP
#define GOAT_CHEESE_HPP

#include <iostream>
#include <string>
#include "Cheese.hpp"

class GoatCheese : public Cheese
{
    public:
	GoatCheese();
	~GoatCheese();
	void setName(std::string name);
	void showName();
    private:
	std::string m_cheese;
};

#endif
