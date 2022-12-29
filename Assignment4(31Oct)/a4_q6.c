#include <stdio.h>
int main()
{
    // TODO: Question 6

    int a = 0xAB093C4D;
    char four = (a & 0xF0) >> 4;
    int c = (a & 0xF00) >> 8;
    int zero = (a & 0xF00000) >> 20;
    int b = (a & 0xF000000) >> 24;

    unsigned char firstChar = (char)(((b) << 4 | four) & 0xFF);
    unsigned char secondChar = (char)(((c) << 4 | zero) & 0xFF);

    printf("%x \n%x", firstChar, secondChar);
    return 0;
}