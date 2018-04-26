#include "FrozenClams.hpp"

FrozenClams::FrozenClams()
{
    this->setName("FrozenClams");
}

FrozenClams::~FrozenClams()
{
    this->m_clams.clear();
}

void FrozenClams::setName(std::string name)
{
    this->m_clams = name;
}

void FrozenClams::showName()
{
    std::cout << this->m_clams << std::endl;
}
