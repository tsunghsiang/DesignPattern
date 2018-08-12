#ifndef THEATER_LIGHTS_HPP
#define THEATER_LIGHTS_HPP

#include <iostream>
#include <memory>
#include <string>

class TheaterLights
{
	public:
		/* constructor */
		TheaterLights(std::string description);
		/* member functions */
		void On();
		void Off();
		void Dim(int level);
		std::string ToString();
		/* operator functions */
		friend std::ostream & operator<<(std::ostream & os, const TheaterLights & lights);
	private:
		std::string m_description;
};

using SPTR_TheaterLights = std::shared_ptr<TheaterLights>;

#endif
