0x10-variadic_functions
the project general objective is 
What are variadic functions

How to use va_start, va_arg and va_end macros

Why and how to use the const type qualifier
The roject has header file variadic_function.h which comtain all proto types of afunction and the poject has 4 mandatory task
TASK 0
Write a function that returns the sum of all its parameters.
Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

TASK 1
Write a function that prints numbers, followed by a new line.
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
Print a new line at the end of your function

TASK 2
Write a function that prints strings, followed by a new line.
Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
If one of the string is NULL, print (nil) instead
Print a new line at the end of your function

TASK 3
Write a function that prints anything.
