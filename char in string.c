// Program to find number of any character in string.
#include<stdio.h>

int main()
{
//	int size=20,i;
	char a[20]="student";
	
	int i;
	for(i=0;i<20;i++){
		if(a[i]=='e' || a[i]=='E'){
			printf("E is stored at %d index",i);
		}
	}
	

 	return 0;
}

