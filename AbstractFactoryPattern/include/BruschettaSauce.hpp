#ifndef BRUSCHETTA_SAUCE_HPP
#define BRUSCHETTA_SAUCE_HPP

#include <iostream>
#include <string>
#include "Sauce.hpp"

class BruschettaSauce : public Sauce
{
    public:
	BruschettaSauce();
	~BruschettaSauce();
	void setName(std::string name);
	void showName();
    private:
	std::string m_sauce;
};

#endif
