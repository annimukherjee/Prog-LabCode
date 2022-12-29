#include <stdio.h>
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int sum_row_i = 0;
    int sum_col_i = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum_row_i += arr[i][j];
            sum_col_i += arr[j][i];
        }
        printf("sum of row %d is %d\n", i + 1, sum_row_i);
        printf("sum of col %d is %d\n", i + 1, sum_col_i);
        sum_row_i = 0;
        sum_col_i = 0;
    }

    // PRINTING THE ARRAY---------------------------------

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }

    return 0;
}