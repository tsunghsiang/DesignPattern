#ifndef PROJECTOR_HPP
#define PROJECTOR_HPP

#include <iostream>
#include <memory>
#include <string>
#include "DvdPlayer.hpp"

class Projector
{
	public:
		/* constructor */
		Projector(std::string description, SPTR_Dvd dvd):m_description(description), m_dvd(dvd){}
		/* member functions */
		void On();
		void Off();
		void WideScreenMode();
		void TvMode();
		std::string ToString();
		/* operator functions */
		friend std::ostream & operator<<(std::ostream & os, const Projector & projector);
	private:
		std::string m_description;
		SPTR_Dvd m_dvd;
};

using SPTR_Projector = std::shared_ptr<Projector>;

#endif
