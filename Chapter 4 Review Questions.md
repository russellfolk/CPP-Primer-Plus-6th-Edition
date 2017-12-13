# Chapter 4 Review
## C++ Primer Plus, 6th Edition

1. How would you declare each of the following?

	a. `actors` is an array of 30 `char`.

		1) `char actors[30];`

	b. `betsie` is an array of 100 `short`.

		1) `short betsie[100];`

	c. `chuck` is an array of 13 `float`.

		1) `float chuck[13];`

	d. `dipsea` is an array of 64 `long double`.

		1) `long double dipsea[64];`

2. Do Chapter Review Question 1 using the array template class instead of built-in arrays.

	a. `array<char, 30> actors;`

	b. `array<short, 100> betsie;`

	c. `array<float, 13> chuck;`

	d. `array<long double, 64> dipsea;`

3. Declare an array of five `int`s and initialize it to the first five odd positive integers.

	a. `int odds = {1, 3, 5, 7, 9};`

	b. `int odds[5] = {1, 3, 5, 7, 9};`

4. Write a statement that assigns the sum of the first and last elements of the array in Question 3 to the variable
   `even`.

	a. `int even = odds[0] + odds[4];`

5. Write a statement that displays the value of the second element in the `float` array `ideas`.

	a. `std::cout << ideas[1] << std::endl;`

	b. `std::cout << ideas[1] << "\n";`

6. Declare an array of `char` and initialize it to the string `"cheeseburger"`.

	a. `char food[] = "cheeseburger";`

	b. `char food[13] = "cheeseburger";`

7. Declare a `string` object and initialize it to the string `"Waldorf Salad"`.

	a. `std::string food = "Waldorf Salad";`

8. Devise a structure declaration that describes a fish. The structure should include the kind, the weight in whole
   ounces, and the length in fractional inches.

	```
	struct fish
	{
		std::string kind;
		int weight;
		double length;
	};
	```

9. Declare a variable of the type defined in Question 8 and initialize it.

	`fish mine = {"bass", 64, 32.128};`

10. Use `enum` to define a type called `Response` with the possible values `Yes`, `No`, and `Maybe`. `Yes` should be 
    `1`, `No` should be `0`, and `Maybe` should be `2`.

	```
	enum Response {No, Yes, Maybe};
	```

11. Suppose `ted` is a `double` variable. Declare a pointer that points to `ted` and use the pointer to display `ted`'s
    value.

	a. `double * pted = &ted;`

	b. `std::cout << *pted << std::endl;`

12. Suppose `treacle` is an array of 10 `float`s. Declare a pointer that points to the first element of `treacle` and
    use the pointer to display the first and last elements of the array.

	a. `float * ptreacle = treacle;`

	b. `std::cout << ptreacle[0] << " " << ptreacle[9] << std::endl;`

13. Write a code fragment that asks the user to enter a positive integer and then creates a dynamic array of that many
    `int`s. Do this by using `new`, then again using a `vector` object.

	```
	unsigned num_elements;
	std::cout << "Enter the number of elements you need: ";
	std::cin  >> num_elements;
	int * aints = new int[num_elements];
	vector<int> vints(num_elements);
	```

14. Is the following valid code? If so, what does it print?

    ```
	cout << (int *) "Home of the jolly bytes";
	```

	a. Yes, the string literal `"Home of the jolly bytes"` is evaluated as the address at the start of the string which
	   is then cast by the `(int *)` to be a pointer to int instead of pointer to char which will print the address to
	   the start of the string.

15. Write a code fragment that dynamically allocates a structure of the type described in Question 8 and then reads a
    value for the `kind` member of structure.

	```
	fish * mine = new fish;
	std::cout << "Enter the kind of fish you caught: ";
	std::cin  >> mine->kind;
	```

16. Listing 4.6 illustrates a problem created by following numeric input with line-oriented string input. How would
    replacing this:

    ```
	cin.getline(address, 80);
	```

    with this:

    ```
	cin >> address;
	````

    affect the working of this program?

	a. By not using the getline, you will avoid the preceding uncaught new line but you will only get the first complete
	   element (until the next whitespace) rather than the whole line. This still will not work as desired.

17. Declare a vector object of 10 string objects and an array object of 10 string objects. Show the necessary header
    files and don't use `using`. Do use a `const` for the number of strings.

	```
	#include <array>
	#include <string>
	#include <vector>

	const int num_elements = {10};
	...
	std::vector<std::string> vstr(num_elements);
	std::array<std::string, num_elements> astr;
	...
	```
