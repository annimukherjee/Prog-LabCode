#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    for (int i = 0; i < 5; i++)
        b[i] = a[i];

    printf("copied array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", b[i]);

    printf("\n");
    return 0;
}