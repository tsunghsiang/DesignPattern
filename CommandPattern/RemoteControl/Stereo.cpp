#include "Stereo.hpp"

Stereo::Stereo(std::string location):m_location(location){}

Stereo::~Stereo(){}

void Stereo::On()
{
    if(m_location.length() > 0)
        std::cout << m_location << " Stereo is On" << std::endl;
    else
        std::cout << m_location << "Stereo is On" << std::endl;
}

void Stereo::Off()
{
    if(m_location.length() > 0)
        std::cout << m_location << " Stereo is Off" << std::endl;
    else
        std::cout << m_location << "Stereo is Off" << std::endl;

}

void Stereo::SetCD()
{
    if(m_location.length() > 0)
        std::cout << m_location << " Stereo is Set for CD Input" << std::endl;
    else
        std::cout << m_location << "Stereo is Set for CD Input" << std::endl;
}

void Stereo::SetDvd()
{
    if(m_location.length() > 0)
        std::cout << m_location << " Stereo is Set for DVD Input" << std::endl;
    else
        std::cout << m_location << "Stereo is Set for DVD Input" << std::endl;
}

void Stereo::SetRadio()
{
    if(m_location.length() > 0)
        std::cout << m_location << " Stereo is Set for Radio Input" << std::endl;
    else
        std::cout << m_location << "Stereo is Set for Radio Input" << std::endl;  
}

void Stereo::SetVolume(int volume)
{
    if(m_location.length() > 0)
       std::cout << m_location << " Stereo Volume Set to " << volume << std::endl;
    else
        std::cout << "Stereo Volume Set to " << volume << std::endl;
    
}
