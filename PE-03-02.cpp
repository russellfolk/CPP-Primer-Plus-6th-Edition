/**
  * Programming Exercise 3.2
  * C++ Primer Plus, 6th Edition
  * @author Russell Folk
  *
  * Write a short program that asks for your height in feet and inches and your weight in pounds. (Use three variables
  * to store the information.) Have the program report your body mass index (BMI). To calculate the BMI, first convert
  * your height in feet and inches to your height in inches (1 foot = 12 inches). Then convert your height in inches to
  * your height in meters by multiplying by 0.0254. Then convert your weight in pounds into your mass in kilograms by
  * dividing by 2.2. Finally, compute your BMI by dividing your mass in kilograms by the square of your height in
  * meters. Use symbolic constants to represent the various conversion factors.
  */

#include <iostream>

const int inches_per_foot = {12};
const double inches_to_meters = {0.0254};
const double pounds_to_kilograms = {2.2};

double height_in_meters(int feet, int inches);
double weight_to_mass(double weight);

int main()
{
	int feet, inches;
	double weight, height, mass, bmi;
	
	std::cout << "Enter the feet in your height: ";
	std::cin  >> feet;

	std::cout << "Enter the remaining inches in your height: ";
	std::cin  >> inches;
	
	std::cout << "Enter your weight in pounds: ";
	std::cin  >> weight;

	height = height_in_meters(feet, inches);

	mass = weight_to_mass(weight);

	std::cout << "Height: " << height << " mass: " << mass << std::endl;

	bmi = mass / (height * height);

	std::cout << "Your BMI is " << bmi << ".\n";

	return 0;
}

double height_in_meters(int feet, int inches)
{
	int total_inches = (feet * inches_per_foot) + inches;
	double height = total_inches * inches_to_meters;
	return height;
}

double weight_to_mass(double weight)
{
	return weight / pounds_to_kilograms;
}
