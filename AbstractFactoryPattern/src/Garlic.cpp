#include "Garlic.hpp"

Garlic::Garlic()
{
    this->setName("Garlic");
}

Garlic::~Garlic()
{
    this->m_garlic.clear();
}

void Garlic::setName(std::string name)
{
    this->m_garlic = name;
}

void Garlic::showName()
{
    std::cout << this->m_garlic << std::endl;
}
