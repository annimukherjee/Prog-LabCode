#include <stdio.h>
int main()
{
    int n, i = 1, c = 1;
    float sum = 0.0;
    printf("enter the number of terms: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += (1.0 / c);
        c += 2;
        i++;
    }
    printf("Sum: %f\n", sum);
    return 0;
}