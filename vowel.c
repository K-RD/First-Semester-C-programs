// Program to check given character is vowel or not.
#include<stdio.h>

int main()
{
	char c;
	printf("Enter a character to check whether it is character or not:: ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\n %c is a vowel",c);
			break;
		default:
			printf("\n %c is not a vowel",c);
			break;
				
	}
}
