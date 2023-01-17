//find the sum of even & odd no between 0 and a given mumber.

#include<stdio.h>
int main(){
	int i,even=0,evenc=0,oddc=0,odd=0,num;
	printf("Enter a number:: ");
	scanf("%d", &num);
	for(i=0;i<=num;i++){
		if(i%2==0){
			even+=i;
			evenc+=1;
		}else{
			odd+=i;
			oddc+=1;
		}
	}
	printf("sum of %d even no between 0 and %d is %d\n",evenc,num,even);
	printf("sum of %d odd no between 0 and %d is %d\n",oddc,num,odd);
}
