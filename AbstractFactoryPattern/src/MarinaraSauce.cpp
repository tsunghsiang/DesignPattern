#include "MarinaraSauce.hpp"

MarinaraSauce::MarinaraSauce()
{
    this->setName("MarinaaraSauce");
}

MarinaraSauce::~MarinaraSauce()
{
    this->m_sauce.clear();
}

void MarinaraSauce::setName(std::string name)
{
    this->m_sauce = name;
}

void MarinaraSauce::showName()
{
    std::cout << this->m_sauce << std::endl;
}
