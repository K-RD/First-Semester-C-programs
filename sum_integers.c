//c program to find sum of ten Integers.
#include<stdio.h>

int main()
{	
	int num[10]={1,2,3,4,5,6,7,8,9,10};

	int a = 0;
	int sum=0;
	for(a = 0 ;a<10;a++){
		sum+=num[a];
	}
	printf("Sum of given integers are %d\n",sum);


 	return 0;
}

