//Afive digit no is entered through the keyboard. WAP to obtain its reverse number.
int main()
{
	int num,rev_num,rem,temp;
	printf("Enter the five digit number:: ");
	scanf("%d",&num);
	temp=num;
	
	while(num>0){
		rem=num%10;
		rev_num=(rev_num*10)+rem;
		num=num/10;
	}
	
	if(temp==rev_num){
		printf("Both the numbers are same.");
	}else{
		printf("Both the numbers are different.");
	}
	return 0;
}