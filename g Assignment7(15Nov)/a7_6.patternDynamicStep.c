#include <stdio.h>
int main()
{
    int n, i = 1, c = 1;
    float sum = 0.0;
    printf("number of terms: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += (1.0 / c);
        c += i;
        i++;
    }
    printf("Sum: %f\n", sum);
    return 0;
}