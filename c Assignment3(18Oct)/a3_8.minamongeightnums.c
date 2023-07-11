#include <stdio.h>
int main()
{
    // QUESTION 8
    int n1, n2, n3, n4;
    int n11, n22, n33, n44;
    printf("Enter 8 Numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    scanf("%d %d %d %d", &n11, &n22, &n33, &n44);

    int min1 = (n1 < n2 && n1 < n3 && n1 < n4)
                   ? n1
                   : ((n2 < n3 && n2 < n4) ? n2 : ((n3 < n4) ? n3 : n4));
    int min2 = (n11 < n22 && n11 < n33 && n11 < n44)
                   ? n11
                   : ((n22 < n33 && n22 < n44) ? n22 : ((n33 < n44) ? n33 : n44));
    int min = (min1 > min2) ? min2 : min1;
    printf("Min number is %d\n", min);

    return 0;
}