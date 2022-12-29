#include <stdio.h>
int main()
{
    int d1d, d1m, d1y, d2d, d2m, d2y;
    scanf("%d/%d/%d", &d1d, &d1m, &d1y);
    scanf("%d/%d/%d", &d2d, &d2m, &d2y);
    if (d1y > d2y)
        printf("Earliest: %d/%d/%d\n", d2d, d2m, d2y);
    else if (d1y < d2y)
        printf("Earliest: %d/%d/%d\n", d1d, d1m, d1y);
    else
    {
        if (d1m > d2m)
            printf("Earliest: %d/%d/%d\n", d2d, d2m, d2y);
        else if (d1m < d2m)
            printf("Earliest: %d/%d/%d\n", d1d, d1m, d1y);
        else
        {
            if (d1d > d2d)
                printf("Earliest: %d/%d/%d\n", d2d, d2m, d2y);
            else if (d1d < d2d)
                printf("Earliest: %d/%d/%d\n", d1d, d1m, d1y);
            else
                printf("THE DATES ARE THE SAME\n");
        }
    }
    return 0;
}