// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <cmath>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1", "[example]")
{
	srand(time(0));
	CHECK(getRandom() < 100);
	CHECK(getRandom() < 100);
	REQUIRE(getRandom() < 100);
}
TEST_CASE("Ex2", "[example]")
{
	int rd1, rd2, rd3;
	rd1 = 1;
	rd2 = 2;
	rd3 = 10;
	REQUIRE(getClosestMed(rd1, rd2, rd3) == 2);
}
TEST_CASE("Ex3", "[example]")
{
	int rd1, rd2, rd3;
	rd1 = 1;
	rd2 = 10;
	rd3 = 11;
	REQUIRE(getClosestMed(rd1, rd2, rd3) == 10);
}
TEST_CASE("Ex4", "[example]")
{
	int rd1, rd2, rd3, closest;
	double mean, mingap;
	rd1 = getRandom();
	rd2 = getRandom();
	rd3 = getRandom();
	mean = (rd1 + rd2 + rd3) / 3;
	mingap = abs(rd1 - mean);
	closest = rd1;
	if (mingap > abs(rd2 - mean))
	{
		closest = rd2;
		mingap = abs(rd2 - mean);
	}
	if (mingap > abs(rd3 - mean))
	{
		closest = rd3;
		mingap = abs(rd3 - mean);
	}
	cout << "Random values " << rd1 << "\t" << rd2 << "\t" << rd3 << endl;
	cout << "Mean Value is " << mean << endl;
	cout << "The closest value to mean is " << closest << endl;
	REQUIRE(getClosestMed(rd1, rd2, rd3) == closest);
}