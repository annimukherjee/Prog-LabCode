#include <stdio.h>
int main()
{
    int a[2][3];
    int c = 1;
    int d = 4;
    for (int i = 1; i >= 0; i--)
    {
        for (int j = 0; j < 3; j++)
            a[i][j] = c++;
    }

    // print the array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}