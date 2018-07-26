#ifndef TUNER_HPP
#define TUNER_HPP

#include <iostream>
#include <memory>
#include <string>
#include "Amplifier.hpp"

class Tuner
{
	public:
		/* constructor */
		Tuner(std::string description, SPTR_Amplifier amplifier):m_description(description), m_amplifier(amplifier){}
		/* member functions */
		void On();
		void Off();
		void SetFrequency(double frequency);
		void SetAm();
		void SetFm();
		std::string ToString();		
		/* operator */
		friend std::ostream& operator<<(std::ostream & os, const Tuner & tuner);
	private:
		std::string m_description;
		double m_frequency;
		SPTR_Amplifier m_amplifier;	
};

using SPTR_Tuner = std::shared_ptr<Tuner>;

#endif
