/**
  * Programming Exercise 3.3
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and that then displays the
  * latitude in decimal format. There are 60 seconds of arc to a minute and 60 minutes of arc to a degree; represent
  * these values with symbolic constants. You should use a separate variable for each input value. A sample run should
  * look like this:
  *
  * `Enter a latitude in degrees, minutes, and seconds:`
  * `First, enter the degrees: **37**`
  * `Next, enter the minutes of arc: **51**`
  * `Finally, enter the seconds of arc: **19**`
  * `37 degrees, 51 minutes, 19 seconds = 37.8553 degrees`
  */

#include <iostream>

double arc_to_degrees(int degrees, int minutes, int seconds);

int main()
{
	int degrees, minutes, seconds;
	double decimal_degrees;
	
	std::cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	std::cout << "First, enter the degrees: ";
	std::cin  >> degrees;

	std::cout << "Next, enter the minutes of arc: ";
	std::cin  >> minutes;
	
	std::cout << "Finally, enter the seconds of arc: ";
	std::cin  >> seconds;

	decimal_degrees = arc_to_degrees(degrees, minutes, seconds);

	std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
	          << decimal_degrees << " degrees" << std::endl;

	return 0;
}

double arc_to_degrees(int degrees, int minutes, int seconds)
{
	double min = {minutes + (seconds / 60.0)};
	double deg = {degrees + (min / 60.0)};
	return deg;
}
