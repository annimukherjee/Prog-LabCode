#include <stdio.h>
void maxMinAvg(int *, int *, int *, int *, int *, float *);
int main()
{
    int a, b, c, max, min;
    float avg;
    scanf("%d%d%d", &a, &b, &c);
    maxMinAvg(&a, &b, &c, &max, &min, &avg);
    printf("avg: %.2f\n", avg);
    printf("max: %d\n", max);
    printf("min: %d\n", min);
    return 0;
}

void maxMinAvg(int *a, int *b, int *c, int *max, int *min, float *avg)
{
    *avg = (*a + *b + *c) / 3.0;

    *max = *a;
    if (*max < *b) *max = *b;
    if (*max < *c) *max = *c;

    *min = *a;
    if (*b < *min) *min = *b;
    if (*c < *min) *min = *c;
}
