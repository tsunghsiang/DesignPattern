#ifndef TURKEY_HPP
#define TURKEY_HPP

#include <memory>

class Turkey
{
	public:
		virtual void gobble() = 0;
		virtual void fly() = 0;
	private:
};

using SPTR_Turkey = std::shared_ptr<Turkey>;

#endif


