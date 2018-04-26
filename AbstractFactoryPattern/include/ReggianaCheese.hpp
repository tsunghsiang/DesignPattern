#ifndef REGGIANA_CHEESE_HPP
#define REGGIANA_CHEESE_HPP

#include <iostream>
#include <string>
#include "Cheese.hpp"

class ReggianaCheese : public Cheese
{
    public:
	ReggianaCheese();
	~ReggianaCheese();
	void setName(std::string name);
	void showName();
    private:
	std::string m_cheese;
};

#endif
