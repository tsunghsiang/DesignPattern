#ifndef SAUCE_HPP
#define SAUCE_HPP

#include <iostream>
#include <string>

class Sauce
{
    public:
	virtual ~Sauce(){}
	virtual void setName(std::string name) = 0;
	virtual void showName() = 0;
    private:
};

#endif
