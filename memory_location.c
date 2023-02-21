//Program to print the address of given decleared variables.
#include<stdio.h>

int main()
{
	char a;
    int x,y;
    float p,q;

    a='a';
    x=125;
    y=125;
    p=10.25,q=18.76;

    printf("%u is address of %c\n",&a,a);
    printf("%u is address of %d\n",&x,x);
    printf("%u is address of %d\n",&y,y);
    printf("%u is address of %f\n",&p,p);
    printf("%u is address of %f\n",&q,q);
    
    x=12;
    printf("%u is address of %d\n",&x,x);
    
    return 0;
}

