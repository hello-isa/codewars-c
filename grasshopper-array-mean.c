/*
Find Mean
Find the mean (average) of a list of numbers in an array.

Information
To find the mean (average) of a set of numbers add all of the numbers together and divide by the number of values in the list.

For an example list of 1, 3, 5, 7

1. Add all of the numbers

1+3+5+7 = 16
2. Divide by the number of values in the list. In this example there are 4 numbers in the list.

16/4 = 4
3. The mean (or average) of this list is 4
*/

#include <stdio.h>
#include <stddef.h> // for size_t

double find_average(size_t length, const int nums[length]);

int main()
{
    int listOne[] = {1}; // array is modifiable e.g. listOne[0] = 5 is allowed
    // Find the size of the array without hardcoding it
    size_t listOneLength = sizeof(listOne) / sizeof(listOne[0]); // sizeof returns the datatype size_t

    const int listTwo[] = {1, 3, 5, 7}; // array is not modifiable e.g. listTwo[0] = 5 will result to compilation error
    size_t listTwoLength = sizeof(listTwo) / sizeof(listTwo[0]);

    int listThree[] = {-1, 3, 5, -7};
    size_t listThreeLength = sizeof(listThree) / sizeof(listThree[0]);

    printf("%.1f\n", find_average(listOneLength, listOne));
    printf("%.1f\n", find_average(listTwoLength, listTwo));
    printf("%.1f\n", find_average(listThreeLength, listThree));

    return 0;
}

double find_average(size_t length, const int nums[length])
{
    size_t n;
    int sum = 0, m = 0;

    for (n = 0; n < length; n++)
    {
        sum += nums[n];
        m++;
    }

    double doubleSum = (double)sum; // Type casting, converting int to double because the return data type is double
    double doubleM = (double)m;

    return (doubleSum / doubleM);
}