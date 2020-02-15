
#include"game.h"
void menu()
{
	printf("******************\n");
	printf("******1.开始******\n");
	printf("******0.退出******\n");
	printf("******************\n");
}
void game()
{
	char ret = 0;
	char board[3][3] = { 0 };
	InitBoard(board, 3, 3);
	ShowBoard(board, 3, 3);
	while (1)
	{
		PlayerMove(board, 3, 3);
		ret=IsWin(board, 3, 3);
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, 3, 3);
		ComputerMove(board, 3, 3);
		ret = IsWin(board, 3, 3);
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, 3, 3);
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
	else if (ret == 'X')
	{
		printf("玩家胜出\n");
	}
	else if (ret == 'O')
	{
		printf("电脑胜出\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请输入：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
	} while (input);
	menu();
	return 0;
}
