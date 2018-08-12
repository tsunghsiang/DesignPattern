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

void HomeTheaterFacade::ListenToCd(std::string title)
{
	std::cout << "Get ready for an audiopile experience ..." << std::endl;
	m_lights->On();
	m_amp->On();
	m_amp->SetVolume(5);
	m_amp->SetCd(m_cd);
	m_amp->SetStereoSound();
	m_cd->On();
	m_cd->Play(title);
}

void HomeTheaterFacade::EndCd()
{
	std::cout << "Shutting down CD ..." << std::endl;
	m_amp->Off();
	m_amp->SetCd(m_cd);
	m_cd->Eject();
	m_cd->Off();
}

void HomeTheaterFacade::ListenToRadio(double frequency)
{
	std::cout << "Tuning in the airwaves ..." << std::endl;
	m_tuner->On();
	m_tuner->SetFrequency(frequency);
	m_amp->On();
	m_amp->SetVolume(5);
	m_amp->SetTuner(m_tuner);
}

void HomeTheaterFacade::EndRadio()
{
	std::cout << "Shutting down the tuner ..." << std::endl;
	m_tuner->Off();
	m_amp->Off();
}
