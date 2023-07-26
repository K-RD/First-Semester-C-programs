// c program to find roots of quadratic equation.
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the value of a b and c :: ");
	scanf("%d%d%d",&a,&b,&c);
	
	int r1,r2;
	r1=(-b+((b*b)-(4*a*c))/(2*a));
	r1=(-b-((b*b)-(4*a*c))/(2*a));
	
	printf("roots are %d and %d",r1,r2);


 	return 0;
}

