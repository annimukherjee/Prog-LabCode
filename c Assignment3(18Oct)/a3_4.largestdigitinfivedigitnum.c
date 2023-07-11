#include <stdio.h>
int main()
{
    // QUESTION 4
    int num;
    printf("5 digit number: ");
    scanf("%d", &num);
    int a, b, c, d, e;
    e = num % 10;
    num /= 10;
    d = num % 10;
    num /= 10;
    c = num % 10;
    num /= 10;
    b = num % 10;
    num /= 10;
    a = num % 10;

    int max =
        (a > b && a > c && a > d && a > e) ? a : ((b > c && b > d && b > e) ? b : ((c > d && c > e) ? c : ((d > e) ? d : e)));

    printf("%d\n", max);
    return 0;
}