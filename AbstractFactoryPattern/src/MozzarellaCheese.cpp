#include "MozzarellaCheese.hpp"

MozzarellaCheese::MozzarellaCheese()
{
    this->setName("MozzarellaCheese");
}

MozzarellaCheese::~MozzarellaCheese()
{
    this->m_cheese.clear();
}

void MozzarellaCheese::setName(std::string name)
{
    this->m_cheese = name;
}

void MozzarellaCheese::showName()
{
    std::cout << this->m_cheese << std::endl;
}
