#ifndef MOZZARELLA_CHEESE_HPP
#define MOZZARELLA_CHEESE_HPP

#include <iostream>
#include <string>
#include "Cheese.hpp"

class MozzarellaCheese : public Cheese
{
    public:
	MozzarellaCheese();
	~MozzarellaCheese();
	void setName(std::string name);
	void showName();
    private:
	std::string m_cheese;
};

#endif
