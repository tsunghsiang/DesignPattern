#ifndef THIN_CRUST_DOUGH_HPP
#define THIS_CRUST_DOUGH_HPP

#include <iostream>
#include <string>
#include "Dough.hpp"

class ThinCrustDough : public Dough
{
    public:
	ThinCrustDough();
	~ThinCrustDough();
	void setName(std::string name);
	void showName();
    private:
	std::string m_dough;
};

#endif
