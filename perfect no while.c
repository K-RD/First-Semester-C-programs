
//WAP TO CHECK WHETHER A GIVEN PROGRAM IS PERFECT OR NOT

#include<stdio.h>

int main(){
	
	int sum=0,num,i=1;
	
	printf("Enter a number to check whether it is perfect number or not:: ");
	scanf("%d",&num);
	
	while(i<num)
	{
		if(num%i==0)
		{
			sum+=i;
		}
		ni++;
	}

	if(num==sum){
		printf("\n%d is a perfect number",num);
	}else{
		printf("\n%d is a not perfect number",num);
	}
}
