# Chapter 3 Review
## C++ Primer Plus, 6th Edition

1. Why does C++ have more than one integer type?
    a. To be able to work with systems with limited memory. This way the programmer can designate the appropriate
       storage space for his or her needs rather than always use the largest integer value.
2. Declare variables matching the following descriptions:
    a. A `short` integer with the value 80
       `short a = {80};`
    b. An `unsigned int` integer with the value 42,110
       `unsigned b = {42110};`
    c. An integer with the value 3,000,000,000
       `long long c = {3000000000};`
3. What safeguards does C++ provide to keep you from exceeding the limits of an integer type?
    a. None, C++ will allow you to rollover to the next value if the limits are exceeded. You may use the `climits`
       header to know the limits of the system you are working in and work within them.
4. What is the distinction between 33L and 33?
    a. 33L is a constant that is a long integer while 33 will be a constant that is the system normal integer by
       default.
5. Consider the two C++ statements that follow:
   `char grade = 65`
   `char grade = 'A'`
   Are they equivalent?
    a. Only on systems where ASCII is the default character encoding, otherwise it is indeterminable. Also, 65 is an
       integer constant while A is a character constant in types.
6. How could you use C++ to find out which character the code 88 represents?
    a. `char c = 88;`
       `std::cout << c << std::endl;`
    b. `std::cout.put(char(88));`
    c. `std::cout << char(88) << std::endl;`
    d. `std::cout << (char)88 << std::endl;`
7. Assigning a `long` value to a `float` can result in a rounding error. What about assigning `long` to `double`?
   `long long` to `double`?
    a. If long is a 4 byte type then there will be no loss, however long long will almost always result in a rounding
       error due to the number of bytes used to represent long long.
8. Evaluate the following expressions as C++ would:
    a. `8 * 9 + 2 = 74` 
    b. `6 * 3 / 4 = 4`
    c. `3 / 4 * 6 = 0`
    d. `6.0 * 3 / 4 = 4.5`
    e. `15 % 4 = 3`
9. Suppose `x1` and `x2` are two type `double` variables that you want to add as integers and assign to an integer
   variable. Construct a C++ statement for doing so. What if you want to add them as type `double` and convert to `int`?
    a. `int answer = int(x1) + int(x2)`
    b. `int answer = (int)x1 + (int)x2;`
    c. `int answer = (int)(x1 + x2);`
    d. `int answer = int(x1 + x2);`
10. What is the variable type for each of the following declarations?
    a. `auto cars = 15;` is `int`
    b. `auto lou = 150.37f;` is `float`
    c. `auto level = 'B';` is `char`
    d. `auto crat = U'/U00002155';` is `char32_t`
    e. `auto fract = 8.25f/2.5` is `double`
