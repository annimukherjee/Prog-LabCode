#include <stdio.h>
void maxMinAvg(int *, int *, int *, int *, int *, float *);
int main()
{
    int a, b, c, max, min;
    float avg;
    scanf("%d%d%d", &a, &b, &c);
    maxMinAvg(&a, &b, &c, &max, &min, &avg);
    printf("avg: %f\n", avg);
    printf("max: %d\n", max);
    printf("min: %d\n", min);
    return 0;
}

void maxMinAvg(int *a, int *b, int *c, int *max, int *min, float *avg)
{
    *avg = (*a + *b + *c) / 3.0;
    if (*a > *b && *a > *c)
        *max = *a;
    else if (*b > *c)
        *max = *b;
    else
        *max = *c;

    if (*a < *b && *a < *c)
        *min = *a;
    else if (*b < *c)
        *min = *b;
    else
        *min = *c;
}
