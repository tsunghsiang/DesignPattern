#ifndef BLACK_OLIVE_HPP
#define BLACK_OLIVE_HPP

#include <iostream>
#include <string>
#include "Veggies.hpp"

class BlackOlive : public Veggies
{
    public:
	BlackOlive();
	~BlackOlive();
	void setName(std::string name);
	void showName();
    private:
	std::string m_blackolive;
};

#endif
