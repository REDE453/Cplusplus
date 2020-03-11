#include<stdio.h>
#include<windows.h>
//void func1(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//		for (i = 0; i < 5; i++)
//		{
//			if (arr[i] % 2 == 0)
//			{
//				printf("%d ", arr[i]);
//			}
//		}
//}
//int main()//1.调整数组使奇数全部都位于偶数前面。
//{
//	int arr[5] = { 1,2,3,4,5 };
//	func(arr);
//	system("pause");
//	return 0;
//}
//int func2(int arr[3][3],int row,int col,int num)
//{
//	int i = 0;
//	int j = col - 1;
//	while (j >= 0 && i < row)
//	{
//		if (num == arr[i][j])
//		{
//			return 1;
//		}
//		else if (num > arr[i][j])
//		{
//			++i;
//		}
//		else {
//			--j;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = {1,2,3,2,3,4,3,4,5};
//	int ret=func2(arr,3,3,5);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没有找到");
//	}
//	system("pause");
//	return 0;
//}
//int main()
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
//						if((b==2)+(a==3)==1&&
//							(b == 2) + (e == 4) == 1&&
//							(c == 1) + (d == 2) == 1&&
//							(c == 5) + (d == 4) == 1&&
//							(e == 4) + (a == 1) == 1)
//						{
//							if (a*b*c*d*e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//void func(int killer)
//{
//	int A=0, B=0, C=0, D=0;
//	if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//	{
//		printf("killer=%c", killer);
//	}
//}
//int main()
//{
//	int killer=0;
//	func(killer);
//	system("pause");
//		return 0;
//}