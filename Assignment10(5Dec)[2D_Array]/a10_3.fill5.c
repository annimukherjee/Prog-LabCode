#include <stdio.h>
int main()
{
    int a[3][3];
    int c = 1;
    for (int i = 0; i <= 2; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j <= 2; j++)
                a[i][j] = c++;
        }
        else
        {
            for (int j = 2; j >= 0; j--)
                a[i][j] = c++;
        }
    }

    // print the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}