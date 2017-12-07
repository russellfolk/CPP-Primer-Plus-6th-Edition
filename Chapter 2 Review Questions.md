# Chapter 2 Review
## C++ Primer Plus, 6th Edition

1. What are the modules of C++ programs called?
    a. Functions
2. What does the following preprocessor directive do?
    `#include <iostream>`
    a. Allows the program to use the input and output library functions. This is accomplished by replacing this
       statement with the contents of the iostream header file.
3. What does the following statement do?
    `using namespace std;`
    a. Declares the functions contained in `std` and makes them available to the program without the `std::` prefix.
4. What statement would you use to print the phrase "Hello, world" and then start a new line?
    a. `std::cout << "Hello, world\n";`
    b. `std::cout << "Hello, world" << std::endl;`
    c. `cout << "Hello, world\n";`
    d. `cout << "Hello, world" << endl;`
5. What statement would you use to create an integer variable with the name `cheeses`?
    a. `int cheeses;`
6. What statement would you use to assign the value 32 to the variable `cheeses`?
    a. `cheeses = 32;`
7. What statement would you use to read a value from keyboard input into the variable `cheeses`?
    a. `std::cin >> cheeses;`
    b. `cin >> cheeses;`
8. What statement would you use to print "We have X varieties of cheese," where the current value of the `cheeses`
   variable replaces `X`?
    a. `std::cout << "We have " << cheeses << " varieties of cheese\n";`
    b. `std::cout << "We have " << cheeses << " varieties of cheese" << std::endl;`
    c. `cout << "We have " << cheeses << " varieties of cheese\n";`
    d. `cout << "We have " << cheeses << " varieties of cheese" << endl;`
9. What do the following function prototypes tell you about the functions?
    a. `int froop(double t);`
        a. Function takes a single double value as an argument and returns an integer.
    b. `void rattle(int n);`
        a. Function takes a single integer value as an argument and returns nothing.
    c. `int prune(void);`
        a. Function takes no arguments and returns an integer.
10. When do you not have to use the keyword `return` when you define a function?
    a. When the return type is specified as `void`.
    b. `return;` can be used with no other statement to return to the calling function.
11. Suppose your `main()` function has the following line:
    `cout << "Please enter your PIN: ";`
    And suppose the compiler complains that `cout` is an unknown identifier. What is the likely cause of this complaint,
    and what are three ways to fix the problem?
    a. The program hasn't been set to use the std namespace.
    b. Change the statement to: `std::cout << "Please enter your PIN: ";`.
    c. Add `using namespace std;` to the top of the `main()`.
    d. Add `using namespace std;` to the top of the program, after the includes.
