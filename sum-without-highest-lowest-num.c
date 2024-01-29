/*
Sum all the numbers of a given array, except the highest and the lowest element (by value, not by index).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.

Example
{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6

Input validation
If an empty value is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.

*/

#include <stdio.h>

int sum(const int numbers[], int length);

int main()
{
    // int arr[] = {6, 2, 1, 8, 10};
    int arr[] = {1, 1, 11, 2, 3};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = sum(arr, length);
    printf("Result: %d\n", result); // Output: 16

    return 0;
}

int sum(const int numbers[/*length*/], int length)
{
    if (length <= 1)
    {
        return 0;
    }

    int arr[length];
    int k, n, sum = 0, temp = 0;

    for (k = 0; k < length; k++)
    {
        arr[k] = numbers[k];
    }

    for (k = 0; k < length - 1; k++)
    {
        for (n = 0; n < length - k - 1; n++)
        {
            if (arr[n] > arr[n + 1])
            {
                temp = arr[n + 1];
                arr[n + 1] = arr[n];
                arr[n] = temp;
            }
        }
    }

    for (k = 1; k < length - 1; k++)
    {
        sum = sum + arr[k];
    }

    return sum;
}