#include "RedPepper.hpp"

RedPepper::RedPepper()
{
    this->setName("RedPepper");
}

RedPepper::~RedPepper()
{
    this->m_red_pepper.clear();
}

void RedPepper::setName(std::string name)
{
    this->m_red_pepper = name;
}

void RedPepper::showName()
{
    std::cout << this->m_red_pepper << std::endl;
}
