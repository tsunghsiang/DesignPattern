#ifndef AMPLIFIER_HPP
#define AMPLIFIER_HPP

#include <iostream>
#include <memory>
#include <string>

/* Forward Declaration */
class DvdPlayer;
class CdPlayer;
class Tuner;

class Amplifier
{
	typedef std::weak_ptr<DvdPlayer> SPTR_Dvd;
	typedef std::weak_ptr<CdPlayer> SPTR_Cd;		
	typedef std::weak_ptr<Tuner> SPTR_Tuner;

	public:
		/* constructor */
		Amplifier(std::string description);
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
