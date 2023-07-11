#include <stdio.h>
int main()
{
    int a[6] = {1, 9, 6, 8, 4, 3};
    int sum = 0;
    printf("original array: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
        sum += a[i];
        a[i] = sum;
    }
    printf("\ncumulative sum array: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}