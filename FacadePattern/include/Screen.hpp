#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <iostream>
#include <memory>
#include <string>

class Screen
{
	public:
		/* constructor */
		Screen(std::string description);
		/* member functions */
		void Up();
		void Down();
		std::string ToString();
		/* operator functions */
		friend std::ostream & operator<<(std::ostream & os, const Screen & screen);
	private:
		std::string m_description;
};

using SPTR_Screen = std::shared_ptr<Screen>;

#endif
