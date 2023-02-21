//Program of Tic Tac Toe Game.
#include<stdio.h>

int starter(char ch[3][3]){
	printf("+-----------+\n");
	printf("| %c | %c | %c |\n",ch[0][0],ch[0][1],ch[0][2]);
	printf("|-----------|\n");
	printf("| %c | %c | %c |\n",ch[1][0],ch[1][1],ch[1][2]);
	printf("|-----------|\n");
	printf("| %c | %c | %c |\n",ch[2][0],ch[2][1],ch[2][2]);
	printf("+-----------+\n");
}

int userChoice(){
	int row,col;
	
	printf("Enter row: ");
	scanf("%d",&row);
	
	printf("Enter column: ");
	scanf("%d",&col);
	return {row,col};
}

int checkPlace(int row,int col,char ch[3][3]){
	if(ch[row-1][col-1]==' '){
		ch[row-1][col-1]='X';
	}
	
}

int main()
{	
char ch[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	starter(ch);
	userChoice();
	checkPlace(row,col,ch);


 	return 0;
}

