#include <stdio.h>
int main()
{
    int n, i = 1, d = 2;
    float sum = 0.0, c = 1.0;
    printf("number of terms: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += (c / (c + 1));
        i++;
        c++;
    }
    printf("Sum: %f\n", sum);
    return 0;
}