/**
  * Programming Exercise 2.3
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a C++ program that uses three user-defined functions (counting `main()` as one) and produces the following
  * output:
  *
  * `Three blind mice`
  * `Three blind mice`
  * `See how they run`
  * `See how they run`
  *
  * One function, called two times, should produce the first two lines, and the remaining function, also called twice,
  * should produce the remaining output.
  */

#include <iostream>

void print_mice();
void print_run();

int main()
{
	print_mice();
	print_mice();
	print_run();
	print_run();

	return 0;
}

void print_mice()
{
	std::cout << "Three blind mice\n";
}

void print_run()
{
	std::cout << "See how they run\n";
}
