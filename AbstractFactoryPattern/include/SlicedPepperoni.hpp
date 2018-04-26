#ifndef SLICED_PEPPERONI_HPP
#define SLICED_PEPPERONI_HPP

#include <iostream>
#include <string>
#include "Pepperoni.hpp"

class SlicedPepperoni : public Pepperoni
{
    public:
	SlicedPepperoni();
	~SlicedPepperoni();
	void setName(std::string name);
	void showName();
    private:
	std::string m_pepperoni;
};

#endif
