#ifndef HOME_THEATER_FACADE_HPP
#define HOME_THEATER_FACADE_HPP

#include <iostream>
#include <memory>
#include <string>

#include "Amplifier.hpp"
#include "CdPlayer.hpp"
#include "DvdPlayer.hpp"
#include "PopcornPopper.hpp"
#include "Projector.hpp"
#include "Screen.hpp"
#include "TheaterLights.hpp"
#include "Tuner.hpp"

class HomeTheaterFacade
{
	public:
		/* constructor */
		HomeTheaterFacade( SPTR_Amplifier amp,
						   SPTR_Tuner tuner,
						   SPTR_Dvd dvd,
						   SPTR_Cd cd,
						   SPTR_Projector projector,
						   SPTR_TheaterLights lights,
						   SPTR_Screen screen,
						   SPTR_PopcornPopper popper ):
		m_amp(amp),
		m_tuner(tuner),
		m_dvd(dvd),
		m_cd(cd),
		m_projector(projector),
		m_lights(lights),
		m_screen(screen),
		m_popper(popper){}
		/* member functions */
		void WatchMovie(std::string movie);
		void EndMovie();
		//void ListenToCd(std::string title);
		//void EndCd();
		//void ListenToRadio(double frequency);
		//void EndRadio();
	private:
		SPTR_Amplifier m_amp;
		SPTR_Tuner m_tuner;
		SPTR_Dvd m_dvd;
		SPTR_Cd m_cd;
		SPTR_Projector m_projector;
		SPTR_TheaterLights m_lights;
		SPTR_Screen m_screen;
		SPTR_PopcornPopper m_popper;
};

using SPTR_HomeTheater = std::shared_ptr<HomeTheaterFacade>;

#endif
