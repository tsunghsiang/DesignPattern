#ifndef POPCORN_POPPER_HPP
#define POPCORN_POPPER_HPP

#include <iostream>
#include <memory>
#include <string>

class PopcornPopper
{
	public:
		/* constructor */
		PopcornPopper(std::string description):m_description(description){};
		/* member functions */
		void On();
		void Off();
		void Pop();
		std::string ToString();
		/* operator functions */
		friend std::ostream & operator<<(std::ostream & os, const PopcornPopper & popper);
	private:
		std::string m_description;
};

using SPTR_PopcornPopper = std::shared_ptr<PopcornPopper>;

#endif
