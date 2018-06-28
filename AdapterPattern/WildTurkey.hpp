#ifndef WILD_TURKEY_HPP
#define WILD_TURKEY_HPP

#include "Turkey.hpp"
#include <memory>
#include <iostream>

class WildTurkey : public Turkey
{
	public:
		void gobble();
		void fly();
	private:
};

using SPTR_WildTurkey = std::shared_ptr<WildTurkey>;

#endif
