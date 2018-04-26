#ifndef VEGGIES_HPP
#define VEGGIES_HPP

#include <iostream>
#include <string>

class Veggies
{
    public:
	virtual ~Veggies(){}
	virtual void setName(std::string name) = 0;
	virtual void showName() = 0;
    private:
};

#endif
