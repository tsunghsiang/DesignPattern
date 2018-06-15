#include "CeilingFan.hpp"

CeilingFan::CeilingFan(std::string location):m_location(location), m_speed(State::OFF){}

CeilingFan::~CeilingFan(){}

void CeilingFan::High()
{
    if(m_location.length() > 0)
        std::cout << m_location << " CeilingFan is On High" << std::endl;
    else
         std::cout << "CeilingFan is On High" << std::endl;
    m_speed = State::HIGH;
}

void CeilingFan::Medium()
{
    if(m_location.length() > 0)
        std::cout << m_location << " CeilingFan is On Medium" << std::endl;
    else
         std::cout << "CeilingFan is On Medium" << std::endl;
    m_speed = State::MEDIUM;
}

void CeilingFan::Low()
{
    if(m_location.length() > 0)
        std::cout << m_location << " CeilingFan is On Low" << std::endl;
    else
         std::cout << "CeilingFan is On Low" << std::endl;
    m_speed = State::LOW;
}

void CeilingFan::Off()
{
    if(m_location.length() > 0)
        std::cout << m_location << " CeilingFan is Off" << std::endl;
    else
         std::cout << "CeilingFan is Off" << std::endl;
    m_speed = State::OFF;
}

CeilingFan::State CeilingFan::GetSpeed()
{
    return m_speed;
}
