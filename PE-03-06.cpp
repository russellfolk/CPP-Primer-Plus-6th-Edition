/**
  * Programming Exercise 3.6
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a program that asks how many miles you have driven and how many gallons of gasoline you have used and then
  * reports the miles per gallon your car has gotten. Or, if you prefer, the program can request distance in kilometers
  * and petrol in liters and then report the result European style, in liters per 100 kilometers.
  */

#include <iostream>

int main()
{
	int miles, gasoline;
	std::cout << "Enter the number of miles you've driven: ";
	std::cin  >> miles;

	std::cout << "Enter the gallons of gasoline consumed: ";
	std::cin  >> gasoline;

	double mpg = double(miles)/double(gasoline);

	std::cout << "Your average rate of consumption was " << mpg << " MPG\n";

	return 0;
}
