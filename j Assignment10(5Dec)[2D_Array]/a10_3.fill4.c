#include <stdio.h>
int main()
{
    int a[2][3];
    int c = 1, d = 6, flag = 0, flag2 = 0;
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 1; j >= 0; j--)
        {
            if (i % 2 != 0)
            {
                flag += 1;
                if (flag == 1)
                    c += 1;
                a[j][i] = c--;
            }
            else
            {
                flag2 += 1;
                if (flag2 == 3)
                    c += 3;
                a[j][i] = c++;
            }
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