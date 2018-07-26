#ifndef AMPLIFIER_HPP
#define AMPLIFIER_HPP

#include <iostream>
#include <string>
#include <memory>
#include "DvdPlayer.hpp"
#include "CdPlayer.hpp"
#include "Tuner.hpp"

class Amplifier
{
	public:
		/* constructor */
		Amplifier(std::string description):m_description(description){}
		/* member functions */
		void On();
		void Off();
		void SetStereoSound();
		void SetSurroundSound();
		void SetVolume(int level);
		void SetTuner(SPTR_Tuner tuner);
		void SetDvd(SPTR_Dvd dvd);
		void SetCd(SPTR_Cd cd);
		std::string ToString();
	private:
		std::string m_description;
		SPTR_Tuner m_tuner;
		SPTR_Dvd m_dvd;
		SPTR_Cd m_cd;		
};

using SPTR_Amplifier = std::shared_ptr<Amplifier>;

#endif
