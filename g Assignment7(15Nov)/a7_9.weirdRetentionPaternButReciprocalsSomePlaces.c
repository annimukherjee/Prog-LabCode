#include <stdio.h>
int main()
{
    int n, i = 1, d = 2;
    float sum = 0.0, c = 1;
    printf("number of terms: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum += (c / (c + 1));
            c++;
        }
        else
        {
            sum += ((c + 1) / c);
            c++;
        }
        i++;
    }
    printf("Sum: %f\n", sum);
    return 0;
}