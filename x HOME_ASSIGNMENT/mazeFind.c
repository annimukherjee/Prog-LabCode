#include <stdio.h>
const int M = 6;
const int N = 6;
const int O = 2;
const int P = 100;

void display(int pathFollowed[O][18], int c)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", pathFollowed[i][j]);
        }
        printf("\n");
    }
}
int checkBottom(int matrix[M][N], int pathFollowed[O][18], int curr_i, int curr_j)
{
    int flag = 0;
    for (int i = 0; i < 18; i++)
    {
        if (pathFollowed[0][i] == curr_i + 1 && pathFollowed[1][i] == curr_j)
        {
            flag = 1;
            break;
        }
    }

    if (matrix[curr_i][curr_j] == matrix[curr_i + 1][curr_j] && flag != 1 && (curr_i + 1) <= 5)
        return 1;

    else
        return 0;
}
int checkTop(int matrix[M][N], int pathFollowed[O][18], int curr_i, int curr_j)
{
    int flag = 0;
    for (int i = 0; i < 18; i++)
    {
        if (pathFollowed[0][i] == (curr_i - 1) && pathFollowed[1][i] == (curr_j))
        {
            flag = 1;
            break;
        }
    }

    if (matrix[curr_i][curr_j] == matrix[curr_i - 1][curr_j] && flag != 1 && (curr_i - 1) > 0)
        return 1;
    else
        return 0;
}
int checkLeft(int matrix[M][N], int pathFollowed[O][18], int curr_i, int curr_j)
{
    int flag = 0;
    for (int i = 0; i < 18; i++)
    {
        if (pathFollowed[0][i] == curr_i && pathFollowed[1][i] == curr_j - 1)
        {
            flag = 1;
            break;
        }
    }

    if (matrix[curr_i][curr_j] == matrix[curr_i][curr_j - 1] && (curr_j - 1) >= 0 && flag != 1)
        return 1;
    else
        return 0;
}
int checkRight(int matrix[M][N], int pathFollowed[O][18], int curr_i, int curr_j)
{
    int flag = 0;
    for (int i = 0; i < 18; i++)
    {
        if (pathFollowed[0][i] == curr_i && pathFollowed[1][i] == (curr_j + 1))
        {
            flag = 1;
            break;
        }
    }

    if (matrix[curr_i][curr_j] == matrix[curr_i][curr_j + 1] && flag != 1 && (curr_j + 1) <= 5)
        return 1;
    else
        return 0;
}

int main()
{
    int matrix[6][6] = {
        {0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 1},
        {1, 0, 0, 1, 0, 1},
        {1, 1, 1, 1, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 1, 1, 1},
    };

    int pathFollowed[2][18];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 18; j++)
            pathFollowed[i][j] = -1;
    }
    printf("setup the path array\n\n");
    display(pathFollowed, 18);

    int curr_i = 0, curr_j = 1;
    pathFollowed[0][0] = curr_i;
    pathFollowed[1][0] = curr_j;
    // printf("innitial ele path recorded proof\n\n");
    // display(pathFollowed, 18);
    int ei = 5, ej = 3, c = 1, CONTROL = 1;
    while (CONTROL == 1)
    {
        if (curr_i == ei && curr_j == ej)
        {
            CONTROL = 0;
            continue;
        }

        // printf("c= %d\n\n", c);
        // display(pathFollowed, 18);
        // printf("\n\n");
        if (checkBottom(matrix, pathFollowed, curr_i, curr_j))
        {
            pathFollowed[0][c] = ++curr_i;
            pathFollowed[1][c] = curr_j;
            c += 1;
            continue;
        }
        else if (checkTop(matrix, pathFollowed, curr_i, curr_j))
        {
            pathFollowed[0][c] = --curr_i;
            pathFollowed[1][c] = curr_j;

            c += 1;
            continue;
        }
        if (checkLeft(matrix, pathFollowed, curr_i, curr_j))
        {
            pathFollowed[0][c] = curr_i;
            pathFollowed[1][c] = --curr_j;

            c += 1;
            continue;
        }
        if (checkRight(matrix, pathFollowed, curr_i, curr_j))
        {
            pathFollowed[0][c] = curr_i;
            pathFollowed[1][c] = ++curr_j;

            c += 1;
            continue;
        }
    }
    printf("\n--------------------------------------\nFINAL PATH ONCE AND FOR ALL\n\n\n");
    display(pathFollowed, c);
}
