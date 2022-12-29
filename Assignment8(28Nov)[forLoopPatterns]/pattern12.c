// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int c = 7;

//     for (int a = 1; a <= n; a++)
//     {
//         for (int i = 1; i <= n - a; i++)
//         {
//             printf("  ");
//         }
//         for (int j = 1; j <= ((2 * (a)) - 1); j++)
//         {
//             if (j % 2 != 0)
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  C program to print pascal’s triangle

// #include <stdio.h>
// int main()
// {
//     int rows, coef = 1, space, i, j;
//     printf("\nEnter the number of rows: ");
//     scanf("% d", &rows);
//     printf("\n");

//     for (i = 0; i < rows; i++)
//     {
//         for (space = 1; space <= rows - i; space++)
//             printf(" ");

//         for (j = 0; j <= i; j++)
//         {
//             if (j == 0 || i == 0)
//                 coef = 1;
//             else
//                 coef = coef * (i - j + 1) / j;

//             printf("% 4d", coef);
//         }
//         printf("\n\n");
//     }
//     return 0;
// }

// TODO: My approach
// #include <stdio.h>
// int main()
// {

//     for (int a = 0; a <= 3; a++)
//     {
//         for (int i = a * 10; i <= (a * 10 + a); i++)
//         {
//             printf("%d ", i);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// TODO: Sir's approach
#include <stdio.h>
int main()
{

    for (int a = 0; a <= 3; a++)
    {
        for (int i = 0; i <= a; i++)
        {
            printf("%d%d ", a, i);
        }

        printf("\n");
    }

    return 0;
}
