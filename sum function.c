// A program to add two number using function.
#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter two numbers ::");
	scanf("%d%d",&a,&b);
	
	printf("The sum of %d and %d are %d",a,b,summ(a,b));

 return 0;
}

int summ(int a,int b)
{
	int sum =a+b;
	return sum;
}

