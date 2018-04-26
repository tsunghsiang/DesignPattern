#ifndef ONION_HPP
#define ONION_HPP

#include <iostream>
#include <string>
#include "Veggies.hpp"

class Onion : public Veggies
{
    public:
	Onion();
	~Onion();
	void setName(std::string name);
	void showName();
    private:
	std::string m_onion;
};

#endif
