#include <stdio.h>
int main()
{
    int h1, m1, s1;
    int h2, m2, s2;
    int hours, minutes, seconds;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    if (h1 > h2)
    {
        // then 1 is primary and 2 is secondary
        if (s2 > s1)
        {
            s1 += 60;
            m1--;
            seconds = s1 - s2;
        }
        if (m2 > m1)
        {
            m1 += 60;
            h1--;
            minutes = m1 - m2;
        }
        hours = h1 - h2;
    }
    else if (h2 > h1)
    {
        // then 2 is primary
        if (s1 > s2)
        {
            s2 += 60;
            m2--;
            seconds = s2 - s1;
        }
        else
            seconds = s2 - s1;
        if (m1 > m2)
        {
            m2 += 60;
            h2--;
            minutes = m2 - m1;
        }
        else
            minutes = m2 - m1;
        hours = h2 - h1;
    }
    else
    {
        hours = 0;
        if (m1 > m2)
        {
            // then 1 is primary
            minutes = m1 - m2;
            if (s2 > s1)
            {
                s1 += 60;
                m1--;
                seconds = s1 - s2;
            }
            else
                seconds = s2 - s1;
        }
        else if (m2 > m1)
        {
            minutes = m2 - m1;
            if (s1 > s2)
            {
                s2 += 60;
                m2--;
                seconds = s2 - s1;
            }
            else
                seconds = s2 - s1;
        }
        else
        {
            hours = 0;
            minutes = 0;
            if (s1 > s2)
                seconds = s1 - s2;
            else if (s2 > s1)
                seconds = s2 - s1;
            else
                seconds = 0;
        }
    }
    printf("time difference: %d:%d:%d\n\n", hours, minutes, seconds);
    return 0;
}