#include <stdio.h>
int main()
{
    int a[3];
    printf("Enter 3 numbers: \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d", a);
    return 0;
}