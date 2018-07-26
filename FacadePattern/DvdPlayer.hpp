#ifndef DVD_PLAYER_HPP
#define DVD_PLAYER_HPP

#include <iostream>
#include <memory>
#include <string>
#include "Amplifier.hpp"

class DvdPlayer
{
	public:
		/* constructor */
		DvdPlayer(std::string description, SPTR_Amplifier amplifier):m_description(description), m_amplifier(amplifier){};
		/* member functions */
		void On();
		void Off();
		void Eject();
		void Play(std::string movie);
		void Play(int track);
		void Stop();
		void Pause();
		void SetTwoChannelAudio();
		void SetSurroundAudio();
		std::string ToString();
		/* operator */
		friend std::ostream & operator<<(std::ostream & os, const DvdPlayer & dvd);
	private:
		std::string m_description, m_movie;
		int m_curr_track;
		SPTR_Amplifier m_amplifier;
};

using SPTR_Dvd = std::shared_ptr<DvdPlayer>;

#endif
