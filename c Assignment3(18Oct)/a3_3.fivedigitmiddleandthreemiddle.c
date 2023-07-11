#include <stdio.h>
int main()
{

    // QUESTION 3
    int num;
    printf("5 digit number: ");
    scanf("%d", &num);
    printf("Middle number: %d\n", (num / 100) % 10);
    int y = num / 10000;
    printf("Middle 3 numbers: %d\n\n", (num / 10) - (y * 1000));

    return 0;
}