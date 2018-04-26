#ifndef DOUGH_HPP
#define DOUGH_HPP

#include <iostream>
#include <string>

class Dough
{
    public:
	virtual ~Dough(){}
	virtual void setName(std::string name) = 0;
	virtual void showName() = 0;
    private:
};

#endif
