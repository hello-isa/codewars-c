/*
Create a function that finds the integral of the expression passed.

In order to find the integral all you need to do is add one to the exponent (the second argument), and divide the coefficient (the first argument) by that new number.

For example for 3x^2, the integral would be 1x^3: we added 1 to the exponent, and divided the coefficient by that new number).

Notes:

The output should be a string.
The coefficient and exponent is always a positive integer.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *integrate(int coefficient, int exponent);

int main()
{
    char result[10];

    strcpy(result, integrate(3, 2));
    printf("%s", result);

    return 0;
}

char *integrate(int coefficient, int exponent)
{
    int n = exponent + 1; // new number
    coefficient = coefficient / n;

    char *integral = (char *)malloc(sizeof(char) * 10);
    // Allocate memory for the string since this will be returned to the main function
    // Without allocating memory, once the function exits, it will be not accessible

    snprintf(integral, 10, "%dx^%d", coefficient, n);
    // `snprintf` is used to format a string which the buffer will hold

    return integral;
}