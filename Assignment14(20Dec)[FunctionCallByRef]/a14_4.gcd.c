#include <stdio.h>
void gcd(int *, int *, int *);

int main()
{
    int a, b, gcdd = 0;
    scanf("%d%d", &a, &b);
    gcd(&a, &b, &gcdd);
    printf("the gcd of the two nos is %d\n", gcdd);
    return 0;
}

void gcd(int *a, int *b, int *gcdd)
{
    for (int i = 1; i <= *a && i <= *b; i++)
    {
        if (*a % i == 0 && *b % i == 0)
            *gcdd = i;
    }
}
