/*
Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0. Your function only needs to return the result, what is shown between parentheses in the example below is how you reach that result and it's not part of it, see the sample tests.

For example (Input -> Output):

2 -> 3 (1 + 2)
8 -> 36 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8)
*/

#include <stdio.h>

int summation(int num);

int main()
{
    printf("%d\n", summation(1));
    printf("%d\n", summation(8));
    printf("%d\n", summation(100));

    return 0;
}

int summation(int num)
{
    // your code here
    int x, y = 0;
    for (x = 1; x <= num; x++)
    {
        y += x; // y = y + x
    }

    return y;
}