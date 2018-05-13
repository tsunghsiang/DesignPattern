#include "ChocolateBoiler.hpp"

std::mutex mtx;

ChocolateBoiler * ChocolateBoiler::instance = nullptr;

ChocolateBoiler& ChocolateBoiler::getInstance()
{
    std::lock_guard<std::mutex> lck(mtx);
    if(instance == NULL)
	instance = new ChocolateBoiler();
    return *instance;
}

void ChocolateBoiler::destroy()
{
    if(instance != NULL) 
	delete instance;
}

void ChocolateBoiler::fill()
{
    if(isEmpty())
    {
	m_empty = false;
	m_boiled = true;
	// Fill the boiler with a milk/chocolate mixture
    }
}

void ChocolateBoiler::drain()
{
    if(!isEmpty() && isBoiled())
    {
	// Drain the boiled milk and chocolate
	m_empty = true;
    }
}

void ChocolateBoiler::boil()
{
    if(!isEmpty() && !isBoiled())
    {
	// Drain the boiled milk and chocolate
	m_empty = true;
    }
}

bool ChocolateBoiler::isEmpty()
{
    return this->m_empty;
}

bool ChocolateBoiler::isBoiled()
{
    return this->m_boiled;
}
