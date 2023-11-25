// Program to print all prime numbers less than n using Sieve of Eratosthenes.
#include <stdio.h>

int main() {
	int n=30;
	int arr[n];
	
// 	Marking all index as true
	for(int i=2;i<n;i++){
	    arr[i]=1;
	}
	
	for(int i=2;i<n;i++){
	    if(arr[i]==1){
    	    for(int j=2;j<n;j++){
    	        if(arr[i*j]==1){
    	            arr[i*j]=0;
    	        }
    	    }
	    }
	}
	
	for(int i=2;i<n;i++){
	    if(arr[i]==1){
	        printf("%d\n",i);
	    }
	    
	}
	return 0;
}