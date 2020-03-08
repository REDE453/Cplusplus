#include"game.h"
void InitBoard(char board[][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void ShowBoard(char board[][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("====================\n");
	for (i = 0;i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("====================\n");
}
void SetMine(char mine[][COLS], int row, int col)
{
	int x;
	int y;
	int count = 0;
	while (count < MINE_NUM)
	{
		x = rand() % row+1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count++;
		}
	}
}
static GetMineCount(char mine[][COLS], int x, int y)
{
	return mine[x - 1][y - 1]
		+ mine[x - 1][y]
		+ mine[x - 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x + 1][y + 1]
		+ mine[x + 1][y]
		+ mine[x + 1][y - 1]
		+ mine[x][y - 1] - 8 * '0';

}
void FindMine(char mine[][COLS], char mineInfo[][COLS], int row, int col)
{
	int count = 0;
	int x = 0;
	int y = 0;
	while (count < row*col - MINE_NUM)
	{
		printf("请输入坐标：");
		scanf_s("%d%d\n", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				ShowBoard(mine, row, col);
				break;
			}
			else
			{
				int ret = GetMineCount(mine, x, y);
				mineInfo[x][y] = ret + '0';
				ShowBoard(mineInfo, row, col);
				count++;
			}
		}
		else
		{
			printf("坐标不合法\n");
		}
	}
}