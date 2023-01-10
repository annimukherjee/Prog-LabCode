#include <stdio.h>
void print2DArr(int[][2], int);
int main()
{
    int a[][2] = {{1, 2},
                  {2, 3},
                  {3, 4}};
    int noOfRows = 3;
    print2DArr(a, noOfRows);
    return 0;
}

void print2DArr(int a[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}