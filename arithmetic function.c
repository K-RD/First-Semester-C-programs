// A program to do all the arithmetic operation of two number using function.
#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter two numbers ::");
	scanf("%d%d",&a,&b);
	
	printf("The sum of %d and %d are %d",a,b,summ(a,b));
	printf("The difference of %d and %d are %d",a,b,difference(a,b));
	printf("The product of %d and %d are %d",a,b,multiply(a,b));
	printf("The quotient of %d and %d are %d",a,b,divide(a,b));

 return 0;
}

int summ(int a,int b)
{
	int sum =a+b;
	return sum;
}

int difference(int a,int b)
{
	int difference =a-b;
	return difference;
}

int multiply(int a,int b)
{
	int multiply =a*b;
	return multiply;
}


int divide(int a,int b)
{
	int divide =a/b;
	return divide;
}


