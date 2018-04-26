#include "ReggianaCheese.hpp"

ReggianaCheese::ReggianaCheese()
{
    this->setName("ReggianaCheese");
}

ReggianaCheese::~ReggianaCheese()
{
    this->m_cheese.clear();
}

void ReggianaCheese::setName(std::string name)
{
    this->m_cheese = name;
}

void ReggianaCheese::showName()
{
    std::cout << this->m_cheese << std::endl;
}
