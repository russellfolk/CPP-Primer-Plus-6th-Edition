/**
  * Programming Exercise 3.5
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a program that requests the user to enter the current world population and the current population of the U.S.
  * (or of some other nation of your choice). Store the information in variables of type `long long`. Have the program
  * display the percent that the U.S. (or other nation's) population is of the world's population. The output should
  * look something like this:
  *
  * `Enter the world's population: **6898758899**`
  * `Enter the population of the US: **310783781**`
  * `The population of the US is 4.50492% of the world population.`
  *
  * You can use the Internet to get more recent figures.
  */

#include <iostream>

int main()
{
	long long us_population, world_population;

	std::cout << "Enter the world's population: ";
	std::cin  >> world_population;

	std::cout << "Enter the population of the US: ";
	std::cin  >> us_population;

	double percentage = {double(us_population) / double(world_population) * 100.0};

	std::cout << "The population of the US is " << percentage << "% of the world population.\n"; 

	return 0;
}
