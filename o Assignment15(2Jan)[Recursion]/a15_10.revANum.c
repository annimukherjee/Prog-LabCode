#include <stdio.h>
int no = 0;
void rev(int p)
{
    if (p > 0)
    {
        no = (no * 10) + p % 10;
        rev(p / 10);
    }
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    rev(n);
    printf("%d", no);
}
