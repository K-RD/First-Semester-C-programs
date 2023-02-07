
//WAP TO CHECK WHETHER A GIVEN PROGRAM IS PERFECT OR NOT

#include<stdio.h>

int main(){
	
	int sum=0,num,i;
	
	printf("Enter a number to check whether it is perfect number or not:: ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		if(num%i==0){
			sum+=i;
		}	
	}
	
	if(num==sum){
		printf("\n%d is a perfect number",num);
	}else{
		printf("\n%d is a not perfect number",num);
	}
}
