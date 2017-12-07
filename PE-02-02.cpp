/**
  * Programming Exercise 2.2
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)
  */

#include <iostream>

const int FURLONGS_TO_YARDS = {220};

int main()
{
	std::cout << "Enter a distance in furlongs: ";
	int furlongs;
	std::cin >> furlongs;
	int yards = furlongs * FURLONGS_TO_YARDS;
	std::cout << furlongs << " furlongs is equal to " << yards << " yards." << std::endl;

	return 0;
}
