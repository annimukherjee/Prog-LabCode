#include <stdio.h>
int main()
{
    // QUESTION 7
    int n1, n2, n3;
    printf("Enter the 3 Numbers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int min = (n1 < n2) ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
    printf("Min number is %d\n", min);

    return 0;
}