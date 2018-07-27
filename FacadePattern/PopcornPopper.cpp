#include "PopcornPopper.hpp"

void PopcornPopper::On()
{
	std::cout << m_description << " on" << std::endl;
}

void PopcornPopper::Off()
{
	std::cout << m_description << " off" << std::endl;
}

void PopcornPopper::Pop()
{
	std::cout << m_description << " popping popcorn!" << std::endl;
}

std::string PopcornPopper::ToString()
{
	return m_description;
}

std::ostream & operator<<(std::ostream & os, const PopcornPopper & popper)
{
	os << popper.m_description;
	return os;
}
