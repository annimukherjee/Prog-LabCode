#include <stdio.h>
int main()
{
    int d1, m1, y1;
    int d2, m2, y2;
    int d, m, y;
    scanf("%d/%d/%d", &d1, &m1, &y1);
    scanf("%d/%d/%d", &d2, &m2, &y2);
    if (y1 > y2)
    {
        if (d2 > d1)
        {
            d1 += 30;
            m1--;
            d = d1 - d2;
        }
        if (m2 > m1)
        {
            m1 += 12;
            y1--;
            m = m1 - m2;
        }
        y = y1 - y2;
    }
    else if (y2 > y1)
    {
        if (d1 > d2)
        {
            d2 += 30;
            m2--;
            d = d2 - d1;
        }
        if (m1 > m2)
        {
            m2 += 12;
            y2--;
            m = m2 - m1;
        }
        y = y2 - y1;
    }

    printf("diff: %d/%d/%d\n", d, m, y);
    return 0;
}