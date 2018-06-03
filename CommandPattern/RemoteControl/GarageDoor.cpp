#include "GarageDoor.hpp"

GarageDoor::GarageDoor(std::string location):m_location(location){}

GarageDoor::~GarageDoor(){}

void GarageDoor::Up()
{ 
    if(m_location.length() > 0)
        std::cout << m_location << " Garage Door is Open" << std::endl;
    else
        std::cout << "Garage Door is Open" << std::endl; 
}

void GarageDoor::Down()
{ 
    if(m_location.length() > 0)
        std::cout << m_location << " Garage Door is Closed" << std::endl;
    else
        std::cout << "Garage Door is Closed" << std::endl;
}

void GarageDoor::LightOn()
{
    if(m_location.length() > 0)
        std::cout << m_location << " Garage Door Light is On" << std::endl;
    else
        std::cout << "Garage Door Light is On" << std::endl; 
}

void GarageDoor::LightOff()
{
    if(m_location.length() > 0)
        std::cout << m_location << " Garage Door Light is Off" << std::endl;
    else
        std::cout << "Garage Door Light is Off" << std::endl; 
}
