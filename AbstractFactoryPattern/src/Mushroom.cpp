#include "Mushroom.hpp"

Mushroom::Mushroom()
{
    this->setName("Mushroom");
}

Mushroom::~Mushroom()
{
    this->m_mushroom.clear();
}

void Mushroom::setName(std::string name)
{
    this->m_mushroom = name;
}

void Mushroom::showName()
{
    std::cout << this->m_mushroom << std::endl;
}
