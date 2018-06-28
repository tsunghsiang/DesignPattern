#ifndef DUCK_ADAPTER_HPP
#define DUCK_ADAPTER_HPP

#include "Turkey.hpp"
#include "Duck.hpp"
#include <memory>
#include <iostream>

class DuckAdapter : public Turkey
{
	public:
		DuckAdapter(SPTR_Duck duck_ptr);
		void gobble();
		void fly();
		void down();
	private:
		SPTR_Duck m_duck_ptr;
};

using SPTR_DuckAdapter = std::shared_ptr<DuckAdapter>;

#endif
