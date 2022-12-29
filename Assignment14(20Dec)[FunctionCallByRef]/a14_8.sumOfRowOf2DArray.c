#include <stdio.h>
void sumRow2DArr(int[][2], int *);
int main()
{
    int a[][2] = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 5},
        {5, 6}};
    int sum[5] = {0};

    sumRow2DArr(a, sum);
    for (int i = 0; i < 5; i++)
        printf("Sum of ith(%d) row is: %d\n", i, sum[i]);
    return 0;
}

void sumRow2DArr(int a[][2], int *sum)
{
    int summm = 0;
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
            summm += a[i][j];
        *(sum + c) = summm;
        summm = 0;
        c++;
        printf("\n");
    }
}