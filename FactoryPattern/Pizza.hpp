#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <string>
#include <list>

class Pizza
{
    public:
	~Pizza(){ m_toppings.clear(); }
    	
	virtual void prepare()
	{
	    std::cout << "Preparing " << m_name << std::endl;
	    std::cout << "Tossing dough..." <<std::endl;
	    std::cout << "Adding sauce..." << std::endl;
	    std::cout << "Adding toppings: "<< std::endl;

	    std::list<std::string>::iterator it = m_toppings.begin();
	    while(it != m_toppings.end())
	    {
		std::cout << " " << *it;
		it++;
	    }
	    std::cout << std::endl;
	}
    	
	virtual void bake()
	{
	    std::cout << "Bake for 25mins at 350" <<std::endl;
	}
	
	virtual void cut()
	{
	    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
	}
	
	virtual void box()
	{
	    std::cout << "Place pizza in official PizzaStore box" << std::endl;
	}

	std::string getName(){ return this->m_name; }
	
	void setName(std::string name)
	{
	    this->m_name.assign(name);
	}
	
	void setDough(std::string dough)
	{
	    this->m_dough.assign(dough);
	}
	
	void setSauce(std::string sauce)
	{
	    this->m_sauce.assign(sauce);
	}
	
	void addToppings(std::string top)
	{
	    this->m_toppings.push_back(top);
	}
    private:
	std::string m_name;
	std::string m_dough;
	std::string m_sauce;
	std::list<std::string> m_toppings;
};

#endif
