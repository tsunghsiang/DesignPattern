#ifndef CD_PLAYER_HPP
#define CD_PLAYER_HPP

#include <iostream>
#include <memory>
#include <string>
#include "Amplifier.hpp"

class CdPlayer
{
	public:
		/* constructor */
		CdPlayer(std::string description, SPTR_Amplifier amplifier):m_description(description), m_amplifier(amplifier){}
		/* member functions */
		void On();
		void Off();
		void Eject();
		void Play(std::string title);
		void Play(int track);
		void Stop();
		void Pause();
		std::string ToString();	
		/* operator functions */
		friend std::ostream & operator<<(std::ostream & os, const CdPlayer & cd);
	private:
		std::string m_description, m_title;
		int m_curr_track;
		SPTR_Amplifier m_amplifier;
};

using SPTR_Cd = std::shared_ptr<CdPlayer>;

#endif
