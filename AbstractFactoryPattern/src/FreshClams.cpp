#include "FreshClams.hpp"

FreshClams::FreshClams()
{
    this->setName("FreshClams");
}

FreshClams::~FreshClams()
{
    this->m_clams.clear();
}

void FreshClams::setName(std::string name)
{
    this->m_clams = name;
}

void FreshClams::showName()
{
    std::cout << this->m_clams << std::endl;
}
