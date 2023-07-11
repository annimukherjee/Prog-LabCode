#include <stdio.h>
int main()
{
    int a[6] = {1, 9, 6, 8, 4, 3};
    int sum = 0, summ = 0;
    printf("original array: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
        sum += a[i];
    }
    printf("\ncumulative subtraction array: \n");
    printf("%d ", sum);
    for (int i = 1; i < 6; i++)
    {
        summ += a[i - 1];
        printf("%d ", (sum - summ));
    }

    printf("\n");

    return 0;
}