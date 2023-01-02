#include <stdio.h>

int reverseNumber(int n, int reversed, int place)
{
    if (n == 0)
    {
        return reversed;
    }
    else
    {
        return reverseNumber(n / 10, reversed + (n % 10) * place, place * 10);
    }
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int reversed = reverseNumber(n, 0, 1);
    printf("%d\n", reversed);
    return 0;
}
