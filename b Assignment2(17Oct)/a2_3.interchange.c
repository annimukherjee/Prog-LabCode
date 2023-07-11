#include <stdio.h>
int main()
{
    // TWO VARIABLES------------------------
    int a, b;
    printf("\n\nValue of a: ");
    scanf("%d", &a);
    printf("Value of b: ");
    scanf("%d", &b);

    // Interchaning two values
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\n\nSwapped value of a: %d\n", a);
    printf("Swapped value of b: %d\n\n", b);

    // THREE VARIABLES------------------------
    int x, y, z;
    printf("\n\nValue of x: ");
    scanf("%d", &x);
    printf("Value of y: ");
    scanf("%d", &y);
    printf("Value of z: ");
    scanf("%d", &z);

    temp = z;
    z = x;
    x = y;
    y = temp;

    printf("\n\nSwapped value of x: %d\n", x);
    printf("Swapped value of y: %d\n", y);
    printf("Swapped value of z: %d\n\n", z);

    return 0;
}