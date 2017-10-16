#include "catch.hpp"
#include <Stack.hpp>

SCENARIO("controle init")
{
	Stack <int> Ob;
	
	REQUIRE(Ob.count() == 0);
}

SCENARIO("controle push")
{
	Stack <int> Ob;
	
	Ob.push(1);
	
	REQUIRE(Ob.count() == 1);
}

SCENARIO("controle pop")
{
	Stack <int> Ob;
	
        Ob.push(1);
	Ob.pop();

	REQUIRE(Ob.count() == 0);
}

SCENARIO("controle empty")
{
	Stack <int> Ob;

	Ob.push(1);
	Ob.pop();
	
	REQUIRE(Ob.empty() == true);
}
