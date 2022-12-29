#include <stdio.h>
int main()
{
    int a[5] = {1};
    for (int i = 1; i < 5; i++)
        a[i] = a[i - 1] + i;

    printf("generated array(ascending): \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\n");
    int b[5] = {11};
    int c = 4;
    for (int i = 1; i < 5; i++)
    {
        b[i] = b[i - 1] - c;
        c--;
    }
    printf("generated array(descending): \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", b[i]);

    printf("\n");
    return 0;
}