#include "Light.hpp"

Light::Light(std::string location) : m_location(location){}

Light::~Light(){}

void Light::On()
{ 
    if(m_location.length() > 0)
        std::cout << m_location << " Light is On" << std::endl; 
    else
         std::cout << "Light is On" << std::endl; 
}

void Light::Off()
{
    if(m_location.length() > 0)
        std::cout << m_location << " Light is Off" << std::endl; 
    else
         std::cout << "Light is Off" << std::endl; 
}
