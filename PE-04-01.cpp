/**
  * Programming Exercise 4.1
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a C++ program that requests and displays information as shown in the following example of output:
  *
  * `What is your first name? Betty Sue`
  * `What is your last name? Yewe`
  * `What letter grade do you deserve? B`
  * `What is your age? 22`
  * `Name: Yewe, Betty Sue`
  * `Grade: C`
  * `Age: 22`
  *
  * Note that the program should be able to accept first names that comprise more than one word. Also note that the
  * program adjusts the grade downward-that is, up one letter. Assume that the user requests an A, a B, or a C so that
  * you don't have to worry about the gap between a D and an F.
  */

#include <iostream>
#include <string>

std::string get_name(std::string which_name);
char get_grade();
int get_age();
char compute_grade(char grade);
void print_output(std::string last, std::string first, int age, char grade);

int main()
{
	std::string first_name = get_name("first");
	std::string last_name = get_name("last");
	char desired_grade = get_grade();
	int age = get_age();
	char deserved_grade = compute_grade(desired_grade);
	print_output(last_name, first_name, age, deserved_grade);

	return 0;
}

std::string get_name(std::string which_name)
{
	std::string name;
	std::cout << "What is your " << which_name << " name? ";
	std::getline(std::cin, name);
	return name;
}

char get_grade()
{
	char grade;
	std::cout << "What letter grade do you deserve? ";
	std::cin  >> grade;
	return grade;
}

int get_age()
{
	int age;
	std::cout << "What is your age? ";
	std::cin  >> age;
	return age;
}

char compute_grade(char grade)
{
	char new_grade = {++grade};
	return new_grade;
}

void print_output(std::string last, std::string first, int age, char grade)
{
	std::cout << "Name: " << last << ", " << first << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "Age: " << age << std::endl;
}
