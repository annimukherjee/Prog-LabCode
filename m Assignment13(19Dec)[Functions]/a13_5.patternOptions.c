#include <stdio.h>
void patternOptions(int, char, int);
int main()
{
    int upOrInvert, num;
    char iterable;
    printf("AB\n");
    patternOptions(0, '-', 3);
    printf("BC\n");
    patternOptions(1, '*', 4);
    printf("CD\n");
    patternOptions(1, '=', 3);
    printf("EF\n");
    patternOptions(1, '-', 2);
    return 0;
}
void patternOptions(int dir, char iterable, int num)
{
    if (dir == 0)
    {
        for (int i = num; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                printf("%c", iterable);
            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= i; j++)
                printf("%c", iterable);
            printf("\n");
        }
    }
}