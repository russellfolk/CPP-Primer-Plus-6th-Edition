/**
  * Programming Exercise 3.1
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a short program that asks for your height in integer inches and then converts your height to feet and inches.
  * Have the program use the underscore character to indicate where to type the response. Also use a `const` symboic
  * constant to represent the conversion factor.
  */

#include <iostream>

const int inches_per_foot = 12;

int main()
{
	int total_inches;
	
	std::cout << "Enter your height in inches: ";
	std::cin  >> total_inches;
	
	int feet   = {total_inches / inches_per_foot};
	int inches = {total_inches % inches_per_foot};

	std::cout << total_inches << " inches is " << feet << "'" << inches << "\".\n";

	return 0;
}
