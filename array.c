// WAP to create a 10 integer element array and print its sum & avg of all elements.
#include<stdio.h>

int main()
{
	int a[9],i,sum=0;
	float avg;
	for(i=0;i<10;i++){
		printf("\nEnter the %d elements of array:: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++){
		sum+=a[i];
	}
	printf("\nThe sum of all the elements are %d",sum);

	avg=sum/10.0;
	
	printf("\nThe average of all the elements are %.2f",avg);

return 0;
}

