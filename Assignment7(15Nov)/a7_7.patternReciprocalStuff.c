#include <stdio.h>
int main()
{
    int n, i = 1, c = 1, d = 2;
    float sum = 0.0;
    printf("number of terms: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum += (1.0 / c);
            c += 2;
        }
        else
        {
            sum += d;
            d += 2;
        }
        i++;
    }
    printf("Sum: %f\n", sum);
    return 0;
}