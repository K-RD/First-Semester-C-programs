// Program to print elements of array in ascending order.
#include<stdio.h>

int main()
{
	int a[10]={8,3,8,34,65,76,123,13,45,64};
	
	int i,j,k;
	int temp,count;
	
	while(count!=0){
		count=0;
		
		for(i=0	;i<9;i++){
			if(a[i]<a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				count++;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d, ",a[i]);
	}
	
 return 0;
}
