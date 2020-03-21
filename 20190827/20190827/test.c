#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[num] = { 0 };
//	int *ptr = NULL;
//	ptr = (int*)malloc(num*sizeof(int));
//	if (NULL != ptr)
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + 1) = 0;
//			printf("%d\n", *ptr);
//		}
//	}
//	free(ptr);
//	ptr = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int *p = calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int *ptr = malloc(100);
//	if (ptr != NULL)
//	{
//
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	ptr = realloc(ptr, 1000);
//	int *p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	free(ptr);
//	system("pause");
//	return 0;
//}
//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hellow world");
//	printf(str);
//}
//int main()
//{
//	void Test();
//	system("pause");
//	return 0;
//}
void menu()
{
	printf("***************\n");
	printf("*****1.play****\n");
	printf("*****0.exit*****\n");
	printf("***************\n");
}
//void Game()
//{
//	int randnum = rand() % 100;
//	while (1)
//	{
//		int num = 0;
//		printf("请输入你的数字：");
//		scanf("%d", &num);
//		if (num == randnum)
//		{
//			printf("猜对了\n");
//				break;
//		}
//		else if (num > randnum)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < randnum)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
void game()
{	
	int num1 = 0;
	srand( time(NULL));
	num1 = rand()%100;
	int num;
	int i = 0;
	printf("请输入数字");
	while (1)
	{
		scanf("%d", &num);
		if (num == num1)
		{
			printf("猜对了");
		}
		else if(num>num1)
		{
			printf("猜大了");
		}
		else
		{
			printf("猜小了");
		}
	}
}
//int main()
//{
	/*time_t;
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请输入你的操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("游戏退出");
			break;
		default:
			printf("请输入正确的操作");
			break;
		}
	} while (input);

	switch (input)
	{
	case 1:
		Game();
		break;
		case 0:
		break;
	}*/
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的操作：");
		scanf("%d", &input);
		system("cls");
		printf("开始游戏");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出");
			break;
		default:
			printf("请输入正确的操作");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
