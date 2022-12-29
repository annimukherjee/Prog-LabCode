#include<stdio.h>
int main()
{
// QUESTION 1
     double number;
     scanf("%lf",&number);

    int integerPart=number;
    printf("%d\n" , integerPart);
    int integerNumber = (int)(number*100);
    int decimalPart = (integerNumber)%100;
    printf("%d\n" , decimalPart);


    return 0;
}
