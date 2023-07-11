#include <stdio.h>
int main()
{
    int a[6] = {2, 9, 6, 8, 7, 4};
    int temp;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    for (int i = 0; i < 6; i++)
        printf("%d ", a[i]);

    return 0;
}