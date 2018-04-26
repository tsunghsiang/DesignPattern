#include "GoatCheese.hpp"

GoatCheese::GoatCheese()
{
    this->setName("GoatCheese");
}

GoatCheese::~GoatCheese()
{
    this->m_cheese.clear();
}

void GoatCheese::setName(std::string name)
{
    this->m_cheese = name;
}

void GoatCheese::showName()
{
    std::cout << this->m_cheese << std::endl;
}
