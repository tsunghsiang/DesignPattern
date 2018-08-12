#include "Tuner.hpp"

Tuner::Tuner(std::string description, SPTR_Amplifier amplifier):m_description(description), m_amplifier(amplifier){}

void Tuner::On()
{
	std::cout << m_description << " on" << std::endl;
}

void Tuner::Off()
{
	std::cout << m_description << " off" << std::endl;
}

void Tuner::SetFrequency(double frequency)
{
	std::cout << m_description << " setting frequency to " << frequency << std::endl;
	m_frequency = frequency;
}

void Tuner::SetAm()
{
	std::cout << m_description << " setting AM mode" << std::endl;
}

void Tuner::SetFm()
{
	std::cout << m_description << " setting FM mode" << std::endl;
}

std::string Tuner::ToString()
{
	return m_description;
}

std::ostream & operator<<(std::ostream & os, const Tuner & tuner)
{
	os << tuner.m_description;
	return os;
}
