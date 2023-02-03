
#include<stdio.h>

int main()
{
	 char a;
    int x,y;
    float p,q;

    a='a';
    x=125;
    y=125;
    p=10.25,q=18.76;

    printf("%c is stored at address %u\n",a,&a);
    printf("%d is stored at address %u\n",x,&x);
    printf("%d is stored at address %u\n",y,&y);
    printf("%f is stored at address %u\n",p,&p);
    printf("%f is stored at address %u\n",q,&q);
    
    x=12;
    printf("%d is stored at address %u\n",x,&x);
    
    
    // Hence we can say that int is mutable data type in c language.
    
    return 0;



return 0;
}

