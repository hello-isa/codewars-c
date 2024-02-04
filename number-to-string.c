/*
We need a function that can transform a number (integer) into a string.

What ways of achieving this do you know?

In C, return a dynamically allocated string that will be freed by the test suite.

Examples (input --> output):
123  --> "123"
999  --> "999"
-100 --> "-100"
*/

#include <stdio.h>
#include <stdlib.h>

char *number_to_string(int number);

int main()
{
    // Test cases
    int num1 = 0;
    int num2 = -273;
    int num3 = -314748;

    // Using the function and printing the result
    char *result1 = number_to_string(num1);
    char *result2 = number_to_string(num2);
    char *result3 = number_to_string(num3);

    printf("%d --> \"%s\"\n", num1, result1);
    printf("%d --> \"%s\"\n", num2, result2);
    printf("%d --> \"%s\"\n", num3, result3);

    // Freeing the dynamically allocated memory
    free(result1);
    free(result2);
    free(result3);

    return 0;
}

char *number_to_string(int number)
{
    char *string = (char *)malloc(sizeof(number));

    sprintf(string, "%d", number);
    /*
    sprintf() formats a series of characters and store the result in a string.

    Syntax: int sprintf(char *str, const char *format, ...)
    str - resulting string will be stored
    format - the format specifier similar to the ones used in printf
    */

    return string;
}
