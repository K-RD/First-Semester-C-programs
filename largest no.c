// Program to find lagest no among three numbers.
#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;

    if (a > b && a > c)
    {
        printf("%d is largest among %d , %d and %d", a, a, b, c);
    }
    else if (b > c)
    {
        printf("%d is largest among %d , %d and %d", b, a, b, c);
    }
    else
    {
        printf("%d is largest among %d , %d and %d", c, a, b, c);
    }

    return 0;
}