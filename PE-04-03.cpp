/**
  * Programming Exercise 4.3
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a program that asks the user to enter his or her first name and then last name, and that then constructs,
  * stores, and displays a third string consisting of the user's last name followed by a comma, a space, and first name.
  * Use `char` arrays and functions from the `cstring` header file. A sample run could look like this:
  *
  * `Enter your first name: **Flip**`
  * `Enter your last name: **Fleming**`
  * `Here's your information in a single string: Fleming, Flip`
  */

#include <iostream>
#include <cstring>

int main()
{
	const int SIZE = {80};

	char first_name[SIZE];
	char last_name[SIZE];
	char full_name[SIZE + SIZE + 3];

	std::cout << "Enter your first name: ";
	std::cin.getline(first_name, SIZE);
	
	std::cout << "Enter your last name: ";
	std::cin.getline(last_name, SIZE);

	strncat(full_name, last_name, strlen(last_name));
	strncat(full_name, ", ", 2);
	strncat(full_name, first_name, strlen(first_name));
	full_name[strlen(first_name) + strlen(last_name) + 2] = '\0';

	std::cout << "Here's your information in a single string: " << full_name << std::endl;

	return 0;
}
