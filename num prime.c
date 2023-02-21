#include<stdio.h>

int prime(){
	int i, num, n=50, count,sum;
	
    for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   
    if(count==0 && num!= 1){
	    if(num==7){
		   	printf("%d is a prime number",num);
		   	break;
	   }
   }
   }
}


int main(){
   prime();
}
