#include <stdio.h>
int main()
{
    int a[5] = {9, 5, 6, 3, 7};
    int b[5];

    for (int i = 0; i < 5; i++)
        b[i] = a[5 - i - 1];

    printf("reversed array copied\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", b[i]);

    printf("\n");
    return 0;
}