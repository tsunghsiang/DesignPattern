#include "ThickCrustDough.hpp"

ThickCrustDough::ThickCrustDough()
{
    this->setName("ThickCrustDough");
}

ThickCrustDough::~ThickCrustDough()
{
    this->m_dough.clear();
}

void ThickCrustDough::setName(std::string name)
{
    this->m_dough = name;
}

void ThickCrustDough::showName()
{
    std::cout << this->m_dough << std::endl;
}
