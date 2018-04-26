#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP

#include <iostream>
#include <string>

class Pepperoni
{
    public:
	virtual ~Pepperoni(){}
	virtual void setName(std::string name) = 0;
	virtual void showName() = 0;
    private:
};

#endif
