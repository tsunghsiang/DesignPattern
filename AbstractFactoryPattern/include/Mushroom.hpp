#ifndef MUSHROOM_HPP
#define MUSHROOM_HPP

#include <iostream>
#include <string>
#include "Veggies.hpp"

class Mushroom : public Veggies
{
    public:
        Mushroom();
	~Mushroom();
	void setName(std::string name);
	void showName();
    private:
	std::string m_mushroom;
};

#endif
