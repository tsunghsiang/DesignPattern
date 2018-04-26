#ifndef EGG_PLANT_HPP
#define EGG_PLANT_HPP

#include <iostream>
#include <string>
#include "Veggies.hpp"

class EggPlant : public Veggies
{
    public:
	EggPlant();
	~EggPlant();
	void setName(std::string name);
	void showName();
    private:
	std::string m_eggplant;
};

#endif
