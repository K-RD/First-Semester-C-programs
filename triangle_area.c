//Program to print area of triangle, when all sides are given sides.
#include<stdio.h>

float farea(float a,float b,float c){
	float s=(a+b+c)/2;
	return sqrt((s*(s-a)*(s-b)*(s-c)));
}
int main()
{
	float a,b,c;
	printf("Enter the value of sides of triangle:: ");
	scanf("%f%f%f",&a,&b,&c);
	
	float area=farea(a,b,c);
	
	printf("%.2f is the Area of triangle whose sides are %.2f, %.2f and %.2f",area,a,b,c);

	return 0;
}

