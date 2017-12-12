/**
  * Programming Exercise 3.7
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a program that asks you to enter an automobile gasoline consumption figure in the European style (liters per
  * 100 kilometers) and converts to the U.S. style of miles per gallon. Note that in addition to using different units
  * of measurement, the U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance). Note
  * that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19 mpg is about 12.4 1/100 km, and 27 mpg is
  * about 8.7 1/100km.
  */

#include <iostream>

const double hundred_km_to_mi = {62.14};
const double l_to_gal = {3.875};

int main()
{
	double l_per_100km;
	std::cout << "Enter your gasoline consumption in liters per 100km: ";
	std::cin  >> l_per_100km;

	double mpg = {hundred_km_to_mi * l_to_gal / l_per_100km};

	std::cout << l_per_100km << " liters / 100km is about " << mpg << " MPG.\n";

	return 0;
}
