#include "Screen.hpp"

Screen::Screen(std::string description):m_description(description){}

void Screen::Up()
{
	std::cout << m_description << " going up" << std::endl;
}

void Screen::Down()
{
	std::cout << m_description << " going down" << std::endl;
}

std::string Screen::ToString()
{
	return m_description;
}

std::ostream & operator<<(std::ostream & os, const Screen & screen)
{
	os << screen.m_description;
	return os;
}
