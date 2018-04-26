#ifndef THICK_CRUST_DOUGH_HPP
#define THICK_CRUST_DOUGH_HPP

#include <iostream>
#include <string>
#include "Dough.hpp"

class ThickCrustDough : public Dough
{
    public:
	ThickCrustDough();
	~ThickCrustDough();
	void setName(std::string name);
	void showName();
    private:
	std::string m_dough;
};

#endif
