#ifndef TURKEY_ADAPTER_HPP
#define TURKEY_ADAPTER_HPP

#include "Duck.hpp"
#include "Turkey.hpp"
#include <memory>

class TurkeyAdapter : public Duck
{
	public:
		TurkeyAdapter(SPTR_Turkey turkey_ptr);
		void quack();
		void fly();
	private:
		SPTR_Turkey m_turkey_ptr;
};

using SPTR_TurkeyAdapter = std::shared_ptr<TurkeyAdapter>;

#endif
