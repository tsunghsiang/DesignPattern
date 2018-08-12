#include "Projector.hpp"

Projector::Projector(std::string description, SPTR_Dvd dvd):m_description(description), m_dvd(dvd){}

void Projector::On()
{
	std::cout << m_description << " on" << std::endl;
}

void Projector::Off()
{
	std::cout << m_description << " off" << std::endl;
}

void Projector::WideScreenMode()
{
	std::cout << m_description << " in widescreen mode (16x9 aspect ratio)" << std::endl;
}

void Projector::TvMode()
{
	std::cout << m_description << " in tv mode (4x3 aspect ratio)" << std::endl;
}

std::string Projector::ToString()
{
	return m_description;
}

std::ostream & operator<<(std::ostream & os, const Projector & projector)
{
	os << projector.m_description;
	return os;
}
