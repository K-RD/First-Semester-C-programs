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
			printf("\n %c is a vowel",c);
		case 'E':
			printf("\n %c is a vowel",c);
		case 'I':
			printf("\n %c is a vowel",c);
		case 'O':
			printf("\n %c is a vowel",c);
		case 'U':
			printf("\n %c is a vowel",c);
		case 'a':
			printf("\n %c is a vowel",c);
		case 'e':
			printf("\n %c is a vowel",c);
		case 'i':
			printf("\n %c is a vowel",c);
		case 'o':
			printf("\n %c is a vowel",c);
		case 'u':
			printf("\n %c is a vowel",c);
			break;
		default:
			printf("\n %c is not a vowel",c);
			break;
				
	}
}
