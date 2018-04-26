#ifndef MARINARA_SAUCE_HPP
#define MARINARA_SAUCE_HPP

#include <iostream>
#include <string>
#include "Sauce.hpp"

class MarinaraSauce : public Sauce
{
    public:
	MarinaraSauce();
	~MarinaraSauce();
	void setName(std::string name);
	void showName();
    private:
	std::string m_sauce;
};

#endif
