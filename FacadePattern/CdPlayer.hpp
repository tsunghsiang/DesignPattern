#ifndef CD_PLAYER_HPP
#define CD_PLAYER_HPP

#include <iostream>
#include <memory>
#include <string>

class CdPlayer
{
	friend std::ostream & operator<<(std::ostream & os, const CdPlayer & cd);
	public:

	private:

};

using SPTR_Cd = std::shared_ptr<CdPlayer>;

#endif
