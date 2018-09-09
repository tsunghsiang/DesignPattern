#ifndef CAFFEINE_BEVERAGE_HPP
#define CAFFEINE_BEVERAGE_HPP

#include <iostream>
#include <memory>

class CaffeineBeverage
{
	public:
		/* template method */
		void PrepareReceipe()
		{
			BoilWater();
			Brew();
			PourInCup();
			if(CustomerWantsCondiments())
			{
				AddCondiments();
			}
		}

		/* virtual methods that are deferred to subclasses for implementation */
		virtual void Brew() = 0;
		virtual void AddCondiments() = 0;

		/* concrete methods */
		void BoilWater() { std::cout << "Boiling water" << std::endl; }
		void PourInCup(){ std::cout << "Pour in Cup" << std::endl; }

		/* hook methods: the hook is declared in an abstract class, but only given an empty or default 
		 * implementation. It gives the subclasses to hook into the algorithm at various points. If they
		 * wish; a subclass is also free to ignore the hook. */
		virtual bool CustomerWantsCondiments() = 0;
	private:
};

using SPTR_Beverage = std::shared_ptr<CaffeineBeverage>;

#endif
