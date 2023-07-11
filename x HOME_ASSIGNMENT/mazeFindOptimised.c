#include <stdio.h>
const int M = 6;
const int N = 6;

int main()
{
    int matrix[6][6] = {
        {1, 1, 0, 0, 0, 0},
        {1, 0, 0, 1, 1, 1},
        {1, 0, 0, 1, 0, 1},
        {1, 1, 1, 1, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 1, 1, 1},
    };

    int curr_i = 0, curr_j = 1;
    int ei = 5, ej = 3, c = 1, CONTROL = 1;
    while (CONTROL == 1)
    {
        // Check if the current position is the endpoint
        if (curr_i == ei && curr_j == ej)
        {
            printf("(%d , %d) 🏁\n", curr_i, curr_j);
            CONTROL = 0; // Set CONTROL to 0 to exit the loop
            continue;
        }

        // Move downwards if the next position has the same value and is within bounds
        if (matrix[curr_i][curr_j] == matrix[curr_i + 1][curr_j] && (curr_i + 1) <= 5)
        {
            matrix[curr_i][curr_j] = -1; // Mark the current position as visited
            printf("(%d , %d) ⬇️ ,", curr_i++, curr_j);
            c += 1;
            continue;
        }
        // Move upwards if the next position has the same value and is within bounds
        else if (matrix[curr_i][curr_j] == matrix[curr_i - 1][curr_j] && (curr_i - 1) > 0)
        {
            matrix[curr_i][curr_j] = -1;
            printf("(%d , %d) ⬆️ ,", curr_i--, curr_j);
            c += 1;
            continue;
        }
        // Move leftwards if the next position has the same value and is within bounds
        else if (matrix[curr_i][curr_j] == matrix[curr_i][curr_j - 1] && (curr_j - 1) >= 0)
        {
            matrix[curr_i][curr_j] = -1;
            printf("(%d , %d) ⬅️ ,", curr_i, curr_j--);
            c += 1;
            continue;
        }
        // Move rightwards if the next position has the same value and is within bounds
        else if (matrix[curr_i][curr_j] == matrix[curr_i][curr_j + 1] && (curr_j + 1) <= 5)
        {
            matrix[curr_i][curr_j] = -1;
            printf("(%d , %d) ➡️ ,", curr_i, curr_j++);
            c += 1;
            continue;
        }
    }
    printf("\n");
    return 0;
}