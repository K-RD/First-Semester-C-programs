#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf ("value of d");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	printf("Determinant id : %d",d);

	return 0;
}
