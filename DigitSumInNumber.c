#include<stdio.h>
int main(){
	int num,firstDigit,lastDigit,sum;
	printf("Enter any 4 digit number: ");
	scanf("%d",&num);
	firstDigit=num/1000;
	lastDigit=num-((num/10)*10);
	sum=firstDigit+lastDigit;
	printf("Sum of first Digit and last Digit is: %d",sum);
}
