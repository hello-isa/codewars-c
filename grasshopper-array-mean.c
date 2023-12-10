#include <stdio.h>
#include <stddef.h> // for size_t

double find_average(size_t length, const int nums[length]);

int main()
{
    int listOne[] = {1};
    size_t listOneLength = sizeof(listOne) / sizeof(listOne[0]); // sizeof returns size_t

    int listTwo[] = {1, 3, 5, 7};
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