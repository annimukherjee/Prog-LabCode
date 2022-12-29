#include <stdio.h>
int main()
{
    int arr[2][6];
    int c = 1, d = 7;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i % 2 == 0)
                arr[j][i] = c++;
            if (i % 2 != 0)
                arr[j][i] = d++;
        }
    }
    int l = 4;
    int m = 10;
    for (int i = 0; i < 2; i++)
    {
        arr[i][2] = l--;
        arr[i][3] = m--;
    }

    // PRINTING THE ARRAY---------------------------------

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }

    return 0;
}
