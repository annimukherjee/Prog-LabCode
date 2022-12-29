#include <stdio.h>
int main()
{
    int n, i = 1, j = 1, fac = 1;
    float sum = 0.0, c = 1;
    printf("number of terms: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        while (j <= c)
        {
            fac *= j;
            j++;
        }
        sum += (1.0 / (fac));
        i++;
        c++;
        fac = 1;
        j = 1;
    }
    printf("Sum: %f\n", sum);
    return 0;
}