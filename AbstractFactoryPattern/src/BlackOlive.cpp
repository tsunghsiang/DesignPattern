#include "BlackOlive.hpp"

BlackOlive::BlackOlive()
{
    this->setName("BlackOlive");
}

BlackOlive::~BlackOlive()
{
    this->m_blackolive.clear();
}

void BlackOlive::setName(std::string name)
{
    this->m_blackolive = name;
}

void BlackOlive::showName()
{
    std::cout << this->m_blackolive << std::endl;
}
