#ifndef FRESH_CLAMS_HPP
#define FRESH_CLAMS_HPP

#include <iostream>
#include <string>
#include "Clams.hpp"

class FreshClams : public Clams
{
    public:
	FreshClams();
	~FreshClams();
	void setName(std::string name);
	void showName();
    private:
	std::string m_clams;
};

#endif
