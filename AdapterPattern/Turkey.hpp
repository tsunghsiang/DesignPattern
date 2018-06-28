#ifndef TURKEY_HPP
#define TURKEY_HPP

#include <memory>

class Turkey
{
	public:
		virtual void gobble();
		virtual void fly();
	private:
};

using SPTR_Turkey = std::shared_ptr<Turkey>;

#endif


