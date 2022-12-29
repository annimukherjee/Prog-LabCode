#include <stdio.h>
void pattern(int);
int main()
{
    int x;
    scanf("%d", &x);
    pattern(x);
}

void pattern(int x)
{
    if (x % 2 == 0)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < i; j++)
                printf("*");
            printf("\n");
        }
    }
    else
    {
        for (int i = x; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
                printf("*");
            printf("\n");
        }
    }
}