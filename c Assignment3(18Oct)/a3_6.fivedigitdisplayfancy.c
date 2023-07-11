#include <stdio.h>
int main()
{
    // QUESTION 6

    int num;
    printf("5 digit number: ");
    scanf("%d", &num);
    int final = ((num / 100) % 10) * 100 + (num / 1000) + (num % 100) * 1000;
    printf("%d\n", final);

    return 0;
}