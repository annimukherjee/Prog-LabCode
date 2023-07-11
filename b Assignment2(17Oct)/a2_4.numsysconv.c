#include <stdio.h>

int main()
{
    int octal;
    printf("Enter octal number");
    scanf("%o", &octal);
    printf("Decimal: %d\n", octal);
    printf("Hexadecimal: %x\n\n\n\n", octal);

    int hexadeci;
    printf("Enter Hexadecimal number");
    scanf("%x", &hexadeci);
    printf("Decimal: %d\n", hexadeci);
    printf("Octal: %o\n\n\n\n", hexadeci);

    int deci;
    printf("Enter Decimal number");
    scanf("%d", &deci);
    printf("Hexadecimal: %x\n", deci);
    printf("Octal: %o\n\n\n\n", deci);
}