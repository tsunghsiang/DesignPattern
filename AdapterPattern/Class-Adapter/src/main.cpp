/*
 * The source aims to test the adapter pattern, "TurkeyAdapter" and "DuckAdapter".
 * Both in this example are Class Adapters.
 * */

#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "Turkey.hpp"
#include "WildTurkey.hpp"
#include "TurkeyAdapter.hpp"
#include "DuckAdapter.hpp"
#include <memory>
#include <iostream>

/*
 * Test operations of t duck-related instances
 * */
static void testDuck(SPTR_Duck duck_ptr);

static void testTurkey(SPTR_Turkey turkey_ptr);

int main(int argc, char * argv[])
{
	/* Create Duck and Turkey instances */
	SPTR_Duck duck = std::make_shared<MallardDuck>();
	SPTR_Turkey turkey = std::make_shared<WildTurkey>();

	/* Wrap a WildTurkey in a turkey adapter that makes it look like a duck */
	SPTR_Duck turkeyAdapter = std::make_shared<TurkeyAdapter>();

	/* Wrap a MallardDuck in a duck adapter that makes it look like a turkey */
	SPTR_DuckAdapter duckAdapter = std::make_shared<DuckAdapter>();

	/* Perform turkey behavior */
	std::cout << "The turkey says..." << std::endl;
	turkey->gobble();
	turkey->turkeyFly();

	/* Perform duck behavior */
	std::cout << "\nThe duck says..." << std::endl;
	duck->quack();
	duck->duckFly();

	/* Pass off the turkey as a duck */
	std::cout << "\nThe TurkeyAdapter says..." << std::endl;
	testDuck(turkeyAdapter);

	/* Pass off the duck as a turkey */
	std::cout << "\nThe DuckAdapter says..." << std::endl;
	testTurkey(duckAdapter);

	return 0;
}

static void testDuck(SPTR_Duck duck_ptr)
{
	duck_ptr->quack();
	duck_ptr->duckFly();
}

static void testTurkey(SPTR_Turkey turkey_ptr)
{
	turkey_ptr->gobble();
	turkey_ptr->turkeyFly();
}

