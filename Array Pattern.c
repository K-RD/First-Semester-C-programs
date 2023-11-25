// Program to add elements of * region in given array.
//  |   |   | * |
//  |   | * | * |
//  | * | * | * |

#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int i, j;

    printf("The given array is printed below:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    // Adding elements of * region
    //  |   |   | * |
    //  |   | * | * |
    //  | * | * | * |

    int elmToBeAdded = 1;
    int k, l, summ = 0;

    for (k = 0; k < 3; k++)
    {
        for (l = 0; l < 3; l++)
        {
            if (k + l > elmToBeAdded)
            {
                summ += a[k][l];
            }
        }
    }
    printf("Sum of the elemnts of given pattern is %d", summ);

    return 0;
}