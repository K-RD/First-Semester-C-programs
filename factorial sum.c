// Program to print factorial of given number using function.
#include<stdio.h>

int fact(int n){
	
	int i;
	double fact=0;
	
	for(i=1;i<=n;i++){
		fact+=i;
	}

	printf("sum of first %d natural number is %.1f",n,fact);
}


int main(){
	
	int n;
	
	printf("Enter a number:: ");
	scanf("%d",&n);
	fact(n);

	return 0;
}
