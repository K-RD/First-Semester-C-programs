// Program of Tic Tac Toe Game.
#include <stdio.h>
#include <stdlib.h>

int pattern(char ch[3][3])
{
	printf("+-----------+\n");
	printf("| %c | %c | %c |\n", ch[0][0], ch[0][1], ch[0][2]);
	printf("|-----------|\n");
	printf("| %c | %c | %c |\n", ch[1][0], ch[1][1], ch[1][2]);
	printf("|-----------|\n");
	printf("| %c | %c | %c |\n", ch[2][0], ch[2][1], ch[2][2]);
	printf("+-----------+\n");
}

int userChoice(char ch[3][3])
{
	int row, col;

	printf("Enter row: ");
	scanf("%d", &row);

	printf("Enter column: ");
	scanf("%d", &col);

	if (ch[row - 1][col - 1] == ' ')
	{
		ch[row - 1][col - 1] = 'X';
	}
	else
	{
		printf("Invalid Choice.\n");
		userChoice(ch);
	}
}

int gameOver(char ch[3][3])
{
	if (((ch[0][0] == ch[0][1] && ch[0][1] == ch[0][2]) && (ch[0][1] == 'X' || ch[0][1] == 'O')) ||
		((ch[1][0] == ch[1][1] && ch[1][1] == ch[1][2]) && (ch[1][1] == 'X' || ch[1][1] == 'O')) ||
		((ch[2][0] == ch[2][1] && ch[2][1] == ch[2][2]) && (ch[2][1] == 'X' || ch[2][1] == 'O')) ||
		((ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2]) && (ch[1][1] == 'X' || ch[1][1] == 'O')) ||
		((ch[2][0] == ch[1][1] && ch[1][1] == ch[0][2]) && (ch[1][1] == 'X' || ch[1][1] == 'O')) ||
		((ch[0][0] == ch[1][0] && ch[1][0] == ch[2][0]) && (ch[1][0] == 'X' || ch[1][0] == 'O')) ||
		((ch[0][1] == ch[1][1] && ch[1][1] == ch[2][1]) && (ch[1][1] == 'X' || ch[1][1] == 'O')) ||
		((ch[0][2] == ch[1][2] && ch[1][2] == ch[2][2]) && (ch[1][2] == 'X' || ch[1][2] == 'O')))
	{
		return 1;
	}
	else
	{
		printf("\nGame Terminated");
		return 0;
	}
}

int compChoice(char ch[3][3])
{
	int row = rand() % 2 + 1;
	int col = rand() % 2 + 1;

	if (ch[row][col] == ' ')
	{
		ch[row][col] = 'O';
	}
	else
	{
		compChoice(ch);
	}
}

int main()
{
	int go = 0;

	char ch[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
	do
	{
		pattern(ch);
		userChoice(ch);
		compChoice(ch);
		pattern(ch);
		gameOver(ch);
		printf("\n-------------------------------------\n");
	} while (!go);
	printf("Loop terminated");

	return 0;
}