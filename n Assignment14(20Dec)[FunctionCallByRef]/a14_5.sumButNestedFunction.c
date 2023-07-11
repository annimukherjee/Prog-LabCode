#include <stdio.h>
int sumArr(int *);
int sum(int, int);
int main()
{
    int sumOfArr = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    sumOfArr = sumArr(arr);
    printf("sum of array: %d\n", sumOfArr);
    return 0;
}

int sum(int a, int b) { return (a + b); }

int sumArr(int *a)
{
    int summ = 0;
    for (int i = 0; i < 9; i++)
        summ = sum(summ, *(a + i));
    return summ;
}