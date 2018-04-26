#include "ThinCrustDough.hpp"

ThinCrustDough::ThinCrustDough()
{
    this->setName("ThinCrustDough");
}

ThinCrustDough::~ThinCrustDough()
{
    this->m_dough.clear();
}

void ThinCrustDough::setName(std::string name)
{
    this->m_dough = name;
}

void ThinCrustDough::showName()
{
    std::cout << this->m_dough << std::endl;
}
