#include "SlicedPepperoni.hpp"

SlicedPepperoni::SlicedPepperoni()
{
    this->setName("SlicedPepperoni");
}

SlicedPepperoni::~SlicedPepperoni()
{
    this->m_pepperoni.clear();
}

void SlicedPepperoni::setName(std::string name)
{
    this->m_pepperoni = name;
}

void SlicedPepperoni::showName()
{
    std::cout << this->m_pepperoni << std::endl;
}
