#include <stdio.h>

int main()
{
    int size = 10;
    int a[10] = {2, 5, 4, 7, 3, 9, 45, 23, 76, 12};

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
            }
            else
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}