
#include"game.h"
void menu()
{
	printf("******************\n");
	printf("******1.��ʼ******\n");
	printf("******0.�˳�******\n");
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
		printf("ƽ��\n");
	}
	else if (ret == 'X')
	{
		printf("���ʤ��\n");
	}
	else if (ret == 'O')
	{
		printf("����ʤ��\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("�����룺");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("��������ȷ������\n");
			break;
		}
	} while (input);
	menu();
	return 0;
}
