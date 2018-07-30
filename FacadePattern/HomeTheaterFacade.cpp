#include "HomeTheaterFacade.hpp"

void HomeTheaterFacade::WatchMovie(std::string movie)
{
	std::cout << "Get ready to watch a movie ..." << std::endl;
	m_popper->On();
	m_popper->Pop();
	m_lights->Dim(10);
	m_screen->Down();
	m_projector->On();
	m_projector->WideScreenMode();
	m_amp->On();
	m_amp->SetDvd( m_dvd );
	m_amp->SetSurroundSound();
	m_amp->SetVolume(5);
	m_dvd->On();
	m_dvd->Play(movie);	
}

void HomeTheaterFacade::EndMovie()
{
	std::cout << "Shutting movie theater down ..." << std::endl;
	m_popper->Off();
	m_lights->On();
	m_screen->Up();
	m_projector->Off();
	m_amp->Off();
	m_dvd->Stop();
	m_dvd->Eject();
	m_dvd->Off();
}
