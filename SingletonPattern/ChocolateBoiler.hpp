#ifndef CHOCOLATE_BOILER_HPP
#define CHOCOLATE_BOILER_HPP

#include <iostream>
#include <cstddef>
#include <mutex>

class ChocolateBoiler
{
    private:
	bool m_empty;
	bool m_boiled;

	static ChocolateBoiler * instance;
	ChocolateBoiler(): m_empty(true), m_boiled(false){}

    public:
	static ChocolateBoiler& getInstance();

	void destroy();
	void fill();
	void drain();
	void boil();

	bool isEmpty();
	bool isBoiled();
};

#endif
