// Program to input a 2-d array and print it backwards.
#include<stdio.h>

int main()
{
	int a[3][3];
	
	int i,j,k;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the value for a[%d][%d] :: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][2-j]);
		}
		printf("\n");
	}
	
	
 return 0;
}

