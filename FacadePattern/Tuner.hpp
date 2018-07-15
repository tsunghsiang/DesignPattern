#ifndef TUNER_HPP
#define TUNER_HPP

#include <iostream>
#include <memory>
#include <string>

class Tuner
{
	friend std::ostream& operator<<(std::ostream & os, const Tuner & tuner);
	public:

	private:

};

using SPTR_Tuner = std::shared_ptr<Tuner>;

#endif
