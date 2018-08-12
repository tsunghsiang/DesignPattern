#include "DvdPlayer.hpp"

DvdPlayer::DvdPlayer(std::string description, SPTR_Amplifier amplifier):m_description(description), m_amplifier(amplifier){}

void DvdPlayer::On()
{
	std::cout << m_description << " on" << std::endl;
}

void DvdPlayer::Off()
{
	std::cout << m_description << " off" << std::endl;
}

void DvdPlayer::Eject()
{
	m_movie.clear();
	std::cout << m_description << " eject" << std::endl;
}

void DvdPlayer::Play(std::string movie)
{
	m_movie.assign(movie);
	m_curr_track = 0;
	std::cout << m_description << " playing \"" << m_movie << "\"" << std::endl;
}

void DvdPlayer::Play(int track)
{
	if(m_movie.empty())
	{
		std::cout << m_description << " can't play track " << track << " no dvd inserted" << std::endl;
	}
	else
	{
		m_curr_track = track;
		std::cout << m_description << " playing track " << m_curr_track << " of \""	 << m_movie << "\"" << std::endl;
	}
}

void DvdPlayer::Stop()
{
	m_curr_track = 0;
	std::cout << m_description << " stopped \"" << m_movie << "\"" << std::endl;
}

void DvdPlayer::Pause()
{
	std::cout << m_description << " paused \"" << m_movie << "\"" << std::endl;
}

void DvdPlayer::SetTwoChannelAudio()
{
	std::cout << m_description << " set two channel audio" << std::endl;
}

void DvdPlayer::SetSurroundAudio()
{
	std::cout << m_description << " set surround audio" << std::endl;
}

std::string DvdPlayer::ToString()
{
	return m_description;	
}

std::ostream & operator<<(std::ostream & os, const DvdPlayer & dvd)
{
	os << dvd.m_description;
	return os;
}
