#include "Onion.hpp"

Onion::Onion()
{
    this->setName("Onion");
}

Onion::~Onion()
{
    this->m_onion.clear();
}

void Onion::setName(std::string name)
{
    this->m_onion = name;
}

void Onion::showName()
{
    std::cout << this->m_onion << std::endl;
}
