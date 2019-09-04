#ifndef MENU_COMPONENT_HPP
#define MENU_COMPONENT_HPP

// #include "TypeDef.hpp"
#include <exception>

class MenuComponent
{
	public:
		/* Composite methods */
		virtual void Add(MenuComponent * component)
		{
			throw std::runtime_error("UnsupportedOperationException");
		}

		virtual void Remove(MenuComponent * component)
		{
			throw std::runtime_error("UnsupportedOperationException");
		}

		virtual MenuComponent * GetChild(int i)
		{
			throw std::runtime_error("UnsupportedOperationException");
		}

		/* Operation methods */
		virtual std::string GetName()
		{
			throw std::runtime_error("UnsupportedOperationException");
		}

		virtual std::string GetDescription()
		{
			throw std::runtime_error("UnsupportedOperationException");
		}

		virtual double GetPrice()
		{
			throw std::runtime_error("UnsupportedOperationException");
		}

		virtual bool IsVegetarian()
		{
			throw std::runtime_error("UnsupportedOperationException");
		}

		virtual void Print()
		{
			throw std::runtime_error("UnsupportedOperationException");	
		}
	private:
};

#endif
