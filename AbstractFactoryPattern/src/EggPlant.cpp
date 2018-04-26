#include "EggPlant.hpp"

EggPlant::EggPlant()
{
    this->setName("EggPlant");
}

EggPlant::~EggPlant()
{
    this->m_eggplant.clear();
}

void EggPlant::setName(std::string name)
{
    this->m_eggplant = name;
}

void EggPlant::showName()
{
    std::cout << this->m_eggplant << std::endl;
}
