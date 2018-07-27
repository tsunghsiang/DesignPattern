#include "CdPlayer.hpp"

void CdPlayer::On()
{
	std::cout << m_description << " on" << std::endl;
}

void CdPlayer::Off()
{
	std::cout << m_description << " off" << std::endl;
}

void CdPlayer::Eject()
{
	m_title.clear();
	std::cout << m_description << " eject" << std::endl;
}

void CdPlayer::Play(std::string title)
{
	m_title.assign(title);
	m_curr_track = 0;
	std::cout << m_description << " playing \"" << m_title << "\"" << std::endl;
}

void CdPlayer::Play(int track)
{
	if(m_title.empty())
	{
		std::cout << m_description << " can't play track " << m_curr_track << ", no cd inserted" << std::endl;
	}
	else
	{
		m_curr_track = track;
		std::cout << m_description << " playing track " << m_curr_track << std::endl;
	}
}

void CdPlayer::Stop()
{
	m_curr_track = 0;
	std::cout << m_description << " stopped" << std::endl;
}

void CdPlayer::Pause()
{
	std::cout << m_description << " paused \"" << m_title << "\"" << std::endl;
}

std::string CdPlayer::ToString()
{
	return m_description;
}

std::ostream & operator<<(std::ostream & os, const CdPlayer & cd)
{
	os << cd.m_description;
	return os;
}
