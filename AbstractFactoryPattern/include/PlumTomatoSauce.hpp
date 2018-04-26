#ifndef PLUMTOMATO_SAUCE_HPP
#define PLUMTOMATO_SAUCE_HPP

#include <iostream>
#include <string>
#include "Sauce.hpp"

class PlumTomatoSauce : public Sauce
{
    public:
	PlumTomatoSauce();
	~PlumTomatoSauce();
	void setName(std::string name);
	void showName();
    private:
	std::string m_sauce;
};

#endif
