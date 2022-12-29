#include <stdio.h>
int main()
{
    int d, m, y, i = 1, flag;
    long int masterDays = 366;
    printf("today's date:");
    scanf("%d/%d/%d", &d, &m, &y);
    while (i < y)
    {
        if (i % 400 == 0)
            masterDays += 366;
        else if (i % 100 == 0)
            masterDays += 365;
        else if (i % 4 == 0)
            masterDays += 366;
        else
            masterDays += 365;
        i++;
    }
    if (y % 400 == 0)
        flag = 1;
    else if (y % 100 == 0)
        flag = 0;
    else if (y % 4 == 0)
        flag = 1;
    else
        flag = 0;

    switch (m)
    {
    case 1: // CASE OF JAN
        masterDays += 0;
        break;

    case 2: // CASE OF FEB

        // Jan
        masterDays += 31;
        break;

    case 3: // CASE OF MARCH
        // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        break;

    case 4: // CASE OF APRIL
        // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;
        break;

    case 5: // CASE OF MAY
        // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;
        // April
        masterDays += 30;
        break;

    case 6: // CASE OF JUNE
        // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;
        // April
        masterDays += 30;
        // May
        masterDays += 31;
        break;

    case 7: // CASE OF JULY
        // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;
        // April
        masterDays += 30;
        // May
        masterDays += 31;
        // June
        masterDays += 30;
        break;


    case 8: // CASE OF AUGUST
        // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;

        
        // April
        masterDays += 30;
        // May
        masterDays += 31;
        // June
        masterDays += 30;
        // July
        masterDays += 31;
        break;
    case 9: // CASE OF SEPT
        // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;
        // April
        masterDays += 30;
        // May
        masterDays += 31;
        // June
        masterDays += 30;
        // July
        masterDays += 31;
        // August
        masterDays += 31;
        break;

    case 10: // CASE OF OCT
             // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;
        // April
        masterDays += 30;
        // May
        masterDays += 31;
        // June
        masterDays += 30;
        // July
        masterDays += 31;
        // August
        masterDays += 31;
        // September
        masterDays += 30;
        break;

    case 11: // CASE OF NOV
        // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;
        // April
        masterDays += 30;
        // May
        masterDays += 31;
        // June
        masterDays += 30;
        // July
        masterDays += 31;
        // August
        masterDays += 31;
        // September
        masterDays += 30;
        // October
        masterDays += 31;
        break;

    case 12: // CASE OF DEC
             // Jan
        masterDays += 31;
        // Feb
        if (flag == 1)
            masterDays += 29;
        else
            masterDays += 28;
        // March
        masterDays += 31;
        // April
        masterDays += 30;
        // May
        masterDays += 31;
        // June
        masterDays += 30;
        // July
        masterDays += 31;
        // August
        masterDays += 31;
        // September
        masterDays += 30;
        // October
        masterDays += 31;
        // November
        masterDays += 30;
        break;
    default:
        printf("invalid month\n");
        break;
    }

    masterDays += d;

    printf("%ld\n", masterDays);
    return 0;
}

// 30 days of Nov,Apr,Jun,Sept
//               11 4    6    9