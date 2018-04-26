#ifndef VERY_THIN_CRUST_DOUGH_HPP
#define VERY_THIS_CRUST_DOUGH_HPP

#include <iostream>
#include <string>
#include "Dough.hpp"

class VeryThinCrustDough : public Dough
{
    public:
	VeryThinCrustDough();
	~VeryThinCrustDough();
	void setName(std::string name);
	void showName();
    private:
	std::string m_dough;
};

#endif
