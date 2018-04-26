#include "VeryThinCrustDough.hpp"

VeryThinCrustDough::VeryThinCrustDough()
{
    this->setName("VeryThinCrustDough");
}

VeryThinCrustDough::~VeryThinCrustDough()
{
    this->m_dough.clear();
}

void VeryThinCrustDough::setName(std::string name)
{
    this->m_dough = name;
}

void VeryThinCrustDough::showName()
{
    std::cout << this->m_dough << std::endl;
}
