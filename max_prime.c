//Program to find greatest number in a given array.
#include<stdio.h>

int main()
{
	int a[]={10,20,24,45,23,24,26,26,48,16};
	int i,j,k;
	int num,count=0,max_prime;
	
	for(i=0;i<10;i++){
		num=a[i];
		
		for(j=1;j<=num;j++){
			if(num%j==0){
				count++;
			}
		}
			
		if(count==2){
			max_prime=num;
		}	
		count=0;
	}
	printf("The greatest prime number is %d",max_prime);

	return 0;
}
