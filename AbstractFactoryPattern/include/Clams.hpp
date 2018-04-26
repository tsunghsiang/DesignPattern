#ifndef CLAMS_HPP
#define CLAMS_HPP

#include <iostream>
#include <string>

class Clams
{
    public:
	virtual ~Clams(){}
	virtual void setName(std::string name) = 0;
	virtual void showName() = 0;
    private:
};

#endif
