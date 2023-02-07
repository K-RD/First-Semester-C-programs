//Program to find greatest number in a array which is taken as input from the user.
#include<stdio.h>

int main()
{
	int a[10];
	int i,j,k;
	int num,count=0,max_prime;

	for(i=0;i<10;i++){
		printf("Enter %dth element of the array:: ",i);
		scanf("%d",&a[i]);
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

