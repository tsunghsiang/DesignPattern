#include "Amplifier.hpp"

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
	Tuner * ptr = tuner.get();
	std::cout << m_description << " setting tuner to " << *ptr << std::endl;
	m_tuner = tuner;
}

void Amplifier::SetCd(SPTR_Cd cd)
{
	CdPlayer * ptr = cd.get();
	std::cout << m_description << " setting cd to " << *ptr << std::endl;
	m_cd = cd;
}

void Amplifier::SetDvd(SPTR_Dvd dvd)
{
	DvdPlayer * ptr = dvd.get();
	std::cout << m_description << " setting to dvd to " << *ptr << std::endl;
	m_dvd = dvd;
}

std::string Amplifier::ToString()
{
	return m_description;
}
