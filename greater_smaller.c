#include<stdio.h>

int main()
{
	int a,b;
    printf("Please enter two number: ");
    scanf("%d%d",&a,&b);
    printf("A is %d \nB is %d",a,b);
    if(a>b)
    printf("\n\n\n A is greater than B");
    else
	printf("\n\n\n A is less than B");
}

