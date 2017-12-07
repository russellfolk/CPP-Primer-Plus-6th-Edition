/**
  * Programming Exercise 2.4
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a program that asks the user to enter his or her age. The program then should display the age in months:
  *
  * `Enter your age: **29**`
  *
  * Your age in months is 384.
  */

#include <iostream>

int years_to_months(int years);

int main()
{
	int years;
	
	std::cout << "Enter your age: ";
	std::cin  >> years;
	
	int months = years_to_months(years);

	std::cout << std::endl << "Your age in months is " << months << ".\n";

	return 0;
}

int years_to_months(int years)
{
  int months = {years * 12};
	return months;
}
