#include <stdio.h>
int main()
{

    // QUESTION 9
    int a, b, c;
    printf("3 numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    int secondmin = ((b > a && b < c) || (b < a && b > c)) 
            ? b : (((a > b && a < c) || (a < b && a > c))
            ? a : (((c > b && c < a) || (c < b && c > a)) 
            ? c : -1));
    printf("Second minimum: %d\n\n", secondmin);

    return 0;
}