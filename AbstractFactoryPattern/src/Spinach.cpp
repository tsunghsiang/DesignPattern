#include "Spinach.hpp"

Spinach::Spinach()
{
    this->setName("Spinach");
}

Spinach::~Spinach()
{
    this->m_spinach.clear();
}

void Spinach::setName(std::string name)
{
    this->m_spinach = name;
}

void Spinach::showName()
{
    std::cout << this->m_spinach << std::endl;
}
