
#include<stdio.h>

int main()
{
	int i,j,sum=0,num;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	float avg;
//	for(i=0;i<10;i++){
//		printf("\nEnter the %d elements of array:: ",i);
//		scanf("%d",&a[i]);
//	}
	
	
	for(i=0;i<10;i++){
		num=a[i];
		for(j=2;j<num/2;j++){
         if(num%j==0){
         	if(num!=1){
         		printf("\n%d",i);
            	sum+=num;	
			 }
         	break;
      		}
   		}
	}
	
	
	printf("\n%d",sum);
	



return 0;
}

