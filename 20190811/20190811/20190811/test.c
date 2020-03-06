#include<stdio.h>
#include<windows.h>
//int main()
//{
//	int a = 1, b = 1, c = 1, d = 1, e = 1;
//	for (a = 1; a <= 5; a++)
//	for (b = 1; b <= 5; b++)
//	for (c = 1; c <= 5; c++)
//	for (d = 1; d <= 5; d++)
//	for (e = 1; e <= 5; e++)
//	if (((b == 2 + a == 3) == 1) &&
//	((b == 2 + e == 4) == 1) &&
//	((c == 1 + d == 2) == 1) &&
//	((c == 5 + d == 3) == 1) &&
//	((e == 4 + a == 1) == 1))	
//	if (a*b*c*d*e == 120)
//	{
//		printf("%d%d%d%d%d\n", a, b, c, d, e);					}
//	}
//	system("pause");
//	return 0;
//}
//intmain()
//{
//	int a, b, c, d;
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int munder;
//	for (munder = 'A'; munder <= 'D'; munder++)
//	{
//		if()
//	}
//	system("pause");
//	return 0;
//}
//void func()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) +( a == 3) == 1 &&
//							(b == 2 )+( e == 4) == 1 &&
//							(c == 1 )+ (d == 2) == 1 &&
//							(c == 5 )+ (d == 3) == 1 &&
//							(e == 4) +( a == 1) == 1)
//						{
//							if (a*b*c*d*e == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	func();
//	system("pause");
//		return 0;
//}
//void  func()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') +
//			(killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//}
//int main()
//{
//	func();
//	system("pause");
//	return 0;
//}
void func(int arr[][10], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
}
void Show(int arr[][10], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[10][10] = { 0 };
	func(arr, 10, 10);
	Show(arr, 10, 10);
	system("pause");
	return 0;
}