// Program to swap two numbers using function.
#include<stdio.h>

int swapping(int *i,int *j){
	
	int p=*i;
	int q=*j;
	
	p=p+q;
	q=p-q;
	p=p-q;
	
	*i=p;
	*j=q;
}

int main()
{	
	int a,b;
	
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	printf("The value before swapping is ::\nA is %d \t\tB is %d",a,b);
	
	swapping(&a,&b);
	
	printf("The value after swapping is ::\nA is %d \t\tB is %d",a,b);
	
 	return 0;
}

