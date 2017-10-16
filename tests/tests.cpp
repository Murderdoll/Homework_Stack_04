#include "catch.hpp"
#include <Stack.hpp>

SCENARIO("controle init") {
	Stack<int> IntArr;
	REQUIRE(IntArr.count() == 0);
}
