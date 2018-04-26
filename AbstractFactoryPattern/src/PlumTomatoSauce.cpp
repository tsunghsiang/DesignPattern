#include "PlumTomatoSauce.hpp"

PlumTomatoSauce::PlumTomatoSauce()
{
    this->setName("PlumTomatoSauce");
}

PlumTomatoSauce::~PlumTomatoSauce()
{
    this->m_sauce.clear();
}

void PlumTomatoSauce::setName(std::string name)
{
    this->m_sauce = name;
}

void PlumTomatoSauce::showName()
{
    std::cout << this->m_sauce << std::endl;
}
