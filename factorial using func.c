// Program to print factorial of given number using function.
#include<stdio.h>

int fact(int n){
	
	int i,fact=1;
	
	for(i=1;i<=n;i++){
		fact*=i;
	}
	
	printf("Factorial of %d is %d",n,fact);
}


int main()
{
	int n;
	
	printf("Enter a number to find its factorial:: ");
	scanf("%d",&n);
	fact(n);

	return 0;
}
