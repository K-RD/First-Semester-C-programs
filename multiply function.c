// A program to multiply two number using function.
#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter two numbers ::");
	scanf("%d%d",&a,&b);
	
	printf("The product of %d and %d are %d",a,b,multiply(a,b));

 return 0;
}

int multiply(int a,int b)
{
	int multiply =a*b;
	return multiply;
}

