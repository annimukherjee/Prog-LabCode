#include <stdio.h>
int main()
{
    // TODO: Question 5

    unsigned int a;
    unsigned int b;
    scanf("%i", &a);
    scanf("%i", &b);
    int aPartOne = (a & 0xF0) >> 4;
    int aPartTwo = a & 0xF;
    int bPartOne = (b & 0xF0) >> 4;
    int bPartTwo = b & 0xF;

    int final = ((bPartTwo) << 24 | (aPartOne) << 20 | (aPartTwo) << 16 | (bPartOne) << 12) >> 12;
    printf("%x\n", final);
    return 0;
}