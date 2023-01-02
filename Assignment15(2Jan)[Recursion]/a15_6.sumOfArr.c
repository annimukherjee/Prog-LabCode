#include <stdio.h>
int sumOfArr(int *, int);
int main()
{
    int a[5];
    printf("enter array: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", a + i);
    }
    int result = sumOfArr(a, 5);
    printf("\n\nthe sum of the array is: %d\n", result);

    return 0;
}

int sumOfArr(int *a, int size)
{
    if (size > 0)
    {
        return *a + sumOfArr(a + 1, size - 1);
    }
    else
    {
        return 0;
    }
}