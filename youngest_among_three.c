//WAP to to determine youngest among three person if their age is input through user.
#include<stdio.h>
int main()
{
	int person_1,person_2,person_3;
	
	printf("Enter the age of three person:: ");
	scanf("%d%d%d",&person_1,&person_2,&person_3);
	
	if(person_1<person_2 && person_1<person_3){
		printf("The youngest member is of %d years old.",person_1);
	}else if(person_2<person_3){
		printf("The youngest member is of %d years old.",person_2);
	}else{
		printf("The youngest member is of %d years old.",person_3);
	}
	
	return 0;
}