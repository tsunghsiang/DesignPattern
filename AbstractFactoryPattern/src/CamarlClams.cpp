#include "CamarlClams.hpp"

CamarlClams::CamarlClams()
{
    this->setName("CamarlClams");
}

CamarlClams::~CamarlClams()
{
    this->m_clams.clear();
}

void CamarlClams::setName(std::string name)
{
    this->m_clams = name;
}

void CamarlClams::showName()
{
    std::cout << this->m_clams << std::endl;
}
