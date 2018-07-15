#ifndef DVD_PLAYER_HPP
#define DVD_PLAYER_HPP

#include <iostream>
#include <memory>
#include <string>

class DvdPlayer
{
	friend std::ostream & operator<<(std::ostream & os, const DvdPlayer & dvd);
	public:

	private:

};

using SPTR_Dvd = std::shared_ptr<DvdPlayer>;

#endif
