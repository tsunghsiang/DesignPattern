#include "Amplifier.hpp"
#include "Tuner.hpp"
#include "DvdPlayer.hpp"
#include "CdPlayer.hpp"

Amplifier::Amplifier(std::string description):m_description(description){}

void Amplifier::On()
{
	std::cout << m_description << " on" << std::endl;
}

void Amplifier::Off()
{
	std::cout << m_description << " off" << std::endl;
}

void Amplifier::SetStereoSound()
{
	std::cout << m_description << " stereo mode on" << std::endl;
}

void Amplifier::SetSurroundSound()
{
	std::cout << m_description << " surround sound on (5 speakers, 1 subwoofer)" << std::endl;
}

void Amplifier::SetVolume(int level)
{
	std::cout << m_description << " setting volume to " << level << std::endl;
}

void Amplifier::SetTuner(SPTR_Tuner tuner)
{
	auto ptr = tuner.lock();
	if(ptr)
		std::cout << m_description << " setting tuner to " << *ptr.get() << std::endl;
	else
		std::cout << m_description << " tuner expired" << std::endl;
	m_tuner = tuner;
}

void Amplifier::SetCd(SPTR_Cd cd)
{
	auto ptr = cd.lock();
	if(ptr)
		std::cout << m_description << " setting cd to " << *ptr.get() << std::endl;
	else
		std::cout << m_description << " cd expired" << std::endl;
	m_cd = cd;
}

void Amplifier::SetDvd(SPTR_Dvd dvd)
{
	auto ptr = dvd.lock();
	if(ptr)
		std::cout << m_description << " setting to dvd to " << *ptr.get() << std::endl;
	else
		std::cout << m_description << " dvd expired" << std::endl;
	m_dvd = dvd;
}

std::string Amplifier::ToString()
{
	return m_description;
}
