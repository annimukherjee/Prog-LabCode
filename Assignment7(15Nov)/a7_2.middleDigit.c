#include <stdio.h>
int main()
{
    int a, n = 0, answer, temp, i = 1;
    scanf("%d", &a);
    int aa = a;
    int aaa = aa;
    while (a > 0)
    {
        a /= 10;
        n++;
    }
    // printf("number of digits: %d\n", n);
    if (n % 2 != 0)
    {
        i = 1;
        temp = (n - 1) / 2;
        while (i <= temp)
        {
            aa /= 10;
            i++;
        }
        answer = aa % 10;
    }
    else
    {
        temp = (n / 2) - 1;
        while (i <= temp)
        {
            aaa /= 10;
            i++;
        }
        answer = aaa % 100;
    }
    printf("%d\n", answer);

    return 0;
}