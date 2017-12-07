/**
  * Programming Exercise 3.4
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a program that asks the user to enter the number of seconds as an integer value (use type `long`, or, if
  * available, `long long`) and that then displays the equivalent time in days, hours, minutes, and seconds. Use
  * symbolic constants to represent the number of seconds in a minute. The output should look like this:
  *
  * `Enter the number of seconds: **31600000**`
  * `31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds`
  */

#include <iostream>

const int SECONDS_TO_DAYS    = {60 * 60 * 24};
const int SECONDS_TO_HOURS   = {60 * 60};
const int SECONDS_TO_MINUTES = {60};

int main()
{
	long long total_seconds;
	
	std::cout << "Enter the number of seconds: ";
	std::cin  >> total_seconds;

	long long seconds = total_seconds;

	long long days = {seconds / SECONDS_TO_DAYS};
	seconds %= SECONDS_TO_DAYS;

	int hours = {seconds / SECONDS_TO_HOURS};
	seconds %= SECONDS_TO_HOURS;

	int minutes = {seconds / SECONDS_TO_MINUTES};
	seconds %= SECONDS_TO_MINUTES;

	std::cout << total_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, "
	          << seconds << " seconds\n";

	return 0;
}
