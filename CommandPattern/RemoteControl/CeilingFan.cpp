#include "CeilingFan.hpp"

CeilingFan::CeilingFan(std::string location):m_location(location){}

CeilingFan::~CeilingFan(){}

void CeilingFan::On()
{
    if(m_location.length() > 0)
        std::cout << m_location << " CeilingFan is On" << std::endl;
    else
         std::cout << "CeilingFan is On" << std::endl;
}

void CeilingFan::Off()
{
    if(m_location.length() > 0)
        std::cout << m_location << " CeilingFan is Off" << std::endl;
    else
         std::cout << "CeilingFan is Off" << std::endl;
}
