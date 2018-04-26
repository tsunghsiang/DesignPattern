#ifndef FROZEN_CLAMS_HPP
#define FROZEN_CLAMS_HPP

#include <iostream>
#include <string>
#include "Clams.hpp"

class FrozenClams : public Clams
{
    public:
	FrozenClams();
	~FrozenClams();
	void setName(std::string name);
	void showName();
    private:
	std::string m_clams;
};

#endif
