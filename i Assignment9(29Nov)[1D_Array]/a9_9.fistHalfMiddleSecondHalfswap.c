#include <stdio.h>
int main()
{
    int a[7] = {1, 9, 6, 4, 2, 7, 8};
    int temp[3];
    for (int i = 0; i < 3; i++)
    {
        temp[i] = a[i];
    }
    printf("original: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
        if (i <= 2)
            a[i] = a[7 - 3 + i];

        else if (i >= 4)
            a[i] = temp[i - 4];
    }
    printf("\nswapped: \n");
    for (int i = 0; i < 7; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}