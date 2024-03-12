C Program: Minimum and Maximum Values of Different Data Types

This C program prints out the minimum and maximum values of various data types, including integer and floating-point types. Additionally, it demonstrates overflow issues in the integer types.

## Usage

To run the program, follow these steps:

1. Compile the source code using a C compiler 
2. Execute the compiled a.out file 

## Description

The program is structured as follows:

The main function declares and prints the minimum and maximum values of different data types.
It prints out the limits for integer types such as int, unsigned int, long, unsigned long, char, unsigned char, short, and unsigned short.
It also prints out the limits for floating-point types including float, double, and long double.
Additionally, the program demonstrates integer overflow by incrementing a variable i until it overflows.

## Code Explanation

Integer Types: The program prints the minimum and maximum values of integer types using predefined macros like INT_MIN, INT_MAX, etc. It also demonstrates unsigned integer types.

Floating-Point Types: It prints the minimum and maximum values of floating-point types using macros like FLT_MIN, FLT_MAX, etc.

Overflow Demonstration: The program demonstrates integer overflow by incrementing a variable until it overflows. It initializes i to 0 and repeatedly increments it until it is no longer equal to its casted version as a float.

The program utilizes the casting method to demonstrate integer overflow.
©©©©CREATED BY ANDREW PAOLELLA©©©©