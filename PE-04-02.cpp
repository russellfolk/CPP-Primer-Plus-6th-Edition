/**
  * Programming Exercise 4.2
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Rewrite Listing 4.4, using the C++ `string` class instead of `char` arrays.
  *
  * # Listing
  *
  * // instr2.cpp -- reading more than one word with getline
  * #include <iostream>
  * int main()
  * {
  * 	using namespace std;
  * 	const int ArSize = 20;
  * 	char name[ArSize];
  * 	char dessert[ArSize];
  *
  * 	cout << "Enter your name:\n";
  * 	cin.getline(name, ArSize); // reads through newline
  * 	cout << "Enter your favorite dessert:\n";
  * 	cin.getline(dessert, ArSize);
  * 	cout << "I have some delicious " << dessert;
  * 	cout << " for you, " << name << ".\n";
  * 	return 0;
  * }
  */

#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::string dessert;
	
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Enter your favorite dessert: ";
	std::getline(std::cin, dessert);
	std::cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

	return 0;
}
