#include <stdio.h>
double lastTwoDig(double);
int main()
{
    double x;
    scanf("%lf", &x);
    printf("Last two dig: %lf\n", lastTwoDig(x));
    return 0;
}

double lastTwoDig(double x)
{
    int c = x * 100;
    return (c % 100);
}