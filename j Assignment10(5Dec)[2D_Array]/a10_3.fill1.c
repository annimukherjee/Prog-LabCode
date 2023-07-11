#include <stdio.h>
int main()
{
    int a[2][3];
    int c = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j > -1; j--)
        {
            a[j][i] = c++;
        }
    }

    // print the array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}