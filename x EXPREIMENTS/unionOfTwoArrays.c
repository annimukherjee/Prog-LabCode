#include <stdio.h>
void set_union(int[], int, int[], int, int[]);
int main()
{
    int array1[2] = {12, 34};
    int array2[3] = {56, 34, 76};
    int new[] = {};
    set_union(array1, 2, array2, 3, new);
    printf("After set union operation, the set is : ");
    for (int i = 0; i < 2 + 3 - 1; i++)
    {
        printf("%d ", new[i]);
    }
    printf("\n");
    return 0;
}

void set_union(int array1[], int size1, int array2[], int size2, int new[])
{
    int i = 0, repeat = 0;
    for (i = 0; i < size1; i++)
    {
        new[i] = array1[i];
    }

    // check every element of array2 and check if it is present in new
    // if a element of array2 is already present in new then ignore
    // else if the given element if not present in new then add.

    for (int k = 0; k < 3; k++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (array2[k] == new[j])
            {
                repeat = 1;
                break;
            }
        }
        if (repeat == 0)
        {
            new[i] = array2[k];
            i++;
        }
        repeat = 0;
    }
}