#include <stdio.h>
int main()
{
    // QUESTION 5
    int num;
    printf("3 digit number: ");
    scanf("%d", &num);
    int calc = (num % 10) * 100 + (((num / 10) % 10) * 10) + (num / 100);
    printf("%d\n", calc);
    return 0;
}