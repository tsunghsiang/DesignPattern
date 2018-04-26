#ifndef GARLIC_HPP
#define GARLIC_HPP

#include <iostream>
#include <string>
#include "Veggies.hpp"

class Garlic : public Veggies
{
    public:
	Garlic();
	~Garlic();
	void setName(std::string name);
	void showName();
    private:
	std::string m_garlic;
};

#endif
