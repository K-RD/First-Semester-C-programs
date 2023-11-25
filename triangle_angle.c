//WAP to check whether is valid is not when the three angle of triangle are entered through the keyboard.
#include<stdio.h>
int main()
{
	int angle_1,angle_2,angle_3;
	
	printf("Enter three angles:: ");
	scanf("%d%d%d",&angle_1,&angle_2,&angle_3);
	
	if((angle_1+angle_2+angle_3)==180){
		printf("This is a valid triangle.");
	}else{
		printf("This is not a valid triangle.");
	}
	
	return 0;
}