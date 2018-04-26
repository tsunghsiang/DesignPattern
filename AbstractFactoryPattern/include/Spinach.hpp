#ifndef SPINACH_HPP
#define SPINACH_HPP

#include <iostream>
#include <string>
#include "Veggies.hpp"

class Spinach : public Veggies
{
    public:
	Spinach();
	~Spinach();
	void setName(std::string name);
	void showName();
    private:
	std::string m_spinach;
};

#endif
