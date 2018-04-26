#include "BruschettaSauce.hpp"

BruschettaSauce::BruschettaSauce()
{
    this->setName("BruschettaSauce");
}

BruschettaSauce::~BruschettaSauce()
{
    this->m_sauce.clear();
}

void BruschettaSauce::setName(std::string name)
{
    this->m_sauce = name;
}

void BruschettaSauce::showName()
{
    std::cout << this->m_sauce << std::endl;
}
