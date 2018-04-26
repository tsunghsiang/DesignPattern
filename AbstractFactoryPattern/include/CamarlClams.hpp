#ifndef CAMARL_CLAMS_HPP
#define CAMARL_CLAMS_HPP

#include <iostream>
#include <string>
#include "Clams.hpp"

class CamarlClams : public Clams
{
    public:
	CamarlClams();
	~CamarlClams();
	void setName(std::string name);
	void showName();
    private:
	std::string m_clams;
};

#endif
