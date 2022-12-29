#include <stdio.h>
int main()
{
    // QUESTION 2
    int num;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
    int twodig = num / 10;
    int dig1 = num % 10;
    int dig2 = twodig % 10;
    int dig3 = num / 100;
    int sum = dig1 + dig2 + dig3;
    printf("%d\n%d\n%d\nSum of the above 3 digits is: %d\n", dig1, dig2, dig3, sum);

    return 0;
}
