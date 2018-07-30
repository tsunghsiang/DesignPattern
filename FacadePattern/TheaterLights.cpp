#include "TheaterLights.hpp"

TheaterLights::TheaterLights(std::string description):m_description(description){}

void TheaterLights::On()
{
	std::cout << m_description << " on" << std::endl;
}

void TheaterLights::Off()
{
	std::cout << m_description << " on" << std::endl;
}

void TheaterLights::Dim(int level)
{
	std::cout << m_description << " dimming to " << level << "%" << std::endl;
}

std::string TheaterLights::ToString()
{
	return m_description;
}

std::ostream & operator<<(std::ostream & os, const TheaterLights & lights)
{
	os << lights.m_description;
	return os;
}
