#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <string>
#include <list>
#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"
#include "Veggies.hpp"

using namespace std;

typedef std::list<Veggies *>::iterator IterVeggies;

class Pizza
{
    public:
	virtual ~Pizza()
	{ 
/*	    m_toppings.clear();

	    std::list<Veggies *>::iterator it = m_veg_list.begin();
	    while(it != m_veg_list.end())
		delete it;
	    m_veg_list.clear();

	    delete m_ingre_dough;
	    delete m_ingre_sauce;
	    delete m_ingre_cheese;
	    delete m_ingre_pepperoni;
	    delete m_ingre_clams;*/	    
	}
    	
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
	
	std::string toString()
	{
	    /* code to print pizza here */
	}

	void setDough(std::string dough)
	{
	    this->m_dough.assign(dough);
	}
	
	void setSauce(std::string sauce)
	{
	    this->m_sauce.assign(sauce);
	}
	
	void setCheese(std::string cheese)
	{
	    this->m_cheese.assign(cheese);
	}

	void setClams(std::string clams)
	{
	    this->m_clams.assign(clams);
	}

	void setPepperoni(std::string pepperoni)
	{
	    this->m_pepperoni.assign(pepperoni);
	}

	void addToppings(std::string top)
	{
	    this->m_toppings.push_back(top);
	}

    public:
	std::string m_name;
	std::string m_dough;
	std::string m_sauce;
	std::string m_cheese;
	std::string m_clams;
	std::string m_pepperoni;
	std::list<std::string> m_toppings;

	/* A set of ingredients used in its preparation */
	Dough * m_ingre_dough;
	Sauce * m_ingre_sauce;
	Cheese * m_ingre_cheese;
	Pepperoni * m_ingre_pepperoni;
	Clams * m_ingre_clams;
	IterVeggies m_ingre_veg;
	std::list<Veggies *> m_veg_list;		
};

#endif
