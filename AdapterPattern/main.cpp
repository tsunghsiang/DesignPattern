/*
 * The source aims to test the adapter pattern, "TurkeyAdapter"
 * */

#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "Turkey.hpp"
#include "WildTurkey.hpp"
#include "TurkeyAdapter.hpp"
#include <memory>
#include <iostream>

/*
 * Tes operations of t duck-related instances
 * */
static void testDuck(SPTR_Duck duck_ptr);

int main(int argc, char * argv[])
{
	/* Create Duck and Turkey instances */
	SPTR_Duck duck = std::make_shared<MallardDuck>();
	SPTR_Turkey turkey = std::make_shared<WildTurkey>();

	/* Wrapp a turkey in a turkey adapter that makes it look like a duck */
	SPTR_Duck turkeyAdapter = std::make_shared<TurkeyAdapter>(turkey);

	/* Perform turkey behavior */
	std::cout << "The Turkey says..." << std::endl;
	turkey->gobble();
	turkey->fly();

	/* Perform duck behavior */
	std::cout << "\nThe duck says..." << std::endl;
	duck->quack();
	duck->fly();

	/* Pass off the turkey as a duck */
	std::cout << "\nThe TurkeyAdapter says..." << std::endl;
	testDuck(turkeyAdapter);

	return 0;
}

static void testDuck(SPTR_Duck duck_ptr)
{
	duck_ptr->quack();
	duck_ptr->fly();
}

