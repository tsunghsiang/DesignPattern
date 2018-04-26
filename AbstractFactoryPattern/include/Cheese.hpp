#ifndef CHEESE_HPP
#define CHEESE_HPP

#include <iostream>
#include <string>

class Cheese
{
    public:
	virtual ~Cheese(){}
	virtual void setName(std::string name) = 0;
	virtual void showName() = 0;
    private:
};

#endif
