/**
  * Programming Exercise 2.5
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a program that has `main()` call a user-defined function that takes a Celsius temperature value as an argument
  * and then returns the equivalent Fahrenheit value. The program should request the Celsius value as input from the
  * user and display the result, as shown in the following code:
  *
  * `Please enter a Celsius value: **20**`
  * `20 degrees Celsius is 68 degrees Fahrenheit.`
  * For reference, here is the formula for making the conversion:
  * Fahrenheit = 1.8 x degrees Celsius + 32.0
  */

#include <iostream>

int celsius_to_fahrenheit(int celsius);

int main()
{
	int celsius;
	
	std::cout << "Please enter a Celsius value: ";
	std::cin  >> celsius;
	
	int fahrenheit = celsius_to_fahrenheit(celsius);

	std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.\n";

	return 0;
}

int celsius_to_fahrenheit(int celsius)
{
	double fahrenheit = {1.8 * celsius + 32.0};
	return fahrenheit;
}
