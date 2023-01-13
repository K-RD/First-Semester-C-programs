#include<conio.h>
#include<stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers:: ");
	scanf("%d%d",&a,&b);
	printf("The value of \n A : %d \n B : %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n The value after swapping is \n A : %d \n B : %d",a,b);
	
}
