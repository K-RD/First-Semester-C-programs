#include<stdio.h>

int main(){
    printf("Enter a no to check whether It is prime or not:: ");
    int p;
    scanf("%d",&p);

    if(p>1){
        int fac=0;
        for(int i=2;i<p;i++){
            if(p%i==0){
                fac++;
            }
        }
        if(fac>0){
            printf("%d is not a prime no",p);
            fac=0;
        }else{
            printf("%d is a prime no",p);
        }
    }else{
        printf("%d is not a prime no",p);
    }
}