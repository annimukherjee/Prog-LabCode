#include<stdio.h>
int main()
{
    short int a = 10;
    short int *pointer;
    pointer = &a;

    printf("Value stored in var a %hd\n", a);
    printf("Location of var a %p\n", pointer);
    printf("Value stored in the pointer: %p\n", pointer);
    printf("Location of the pointer: %p\n", &pointer);
    
    return 0;
}