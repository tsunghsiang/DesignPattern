#ifndef RED_PEPPER_HPP
#define RED_PEPPER__HPP

#include <iostream>
#include <string>
#include "Veggies.hpp"

class RedPepper : public Veggies
{
    public:
        RedPepper();
	~RedPepper();
	void setName(std::string name);
	void showName();
    private:
	std::string m_red_pepper;
};

#endif
