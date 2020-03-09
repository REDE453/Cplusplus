#include<stdio.h>
#include<windows.h>
#include<math.h>
//void func(int i, int j)
//{
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//			 if (j > sqrt(i))
//			 {
//				 printf("%d ", i);
//			}
//	}
//	printf("\n");
//}
//int main()
//{
//	int i=0, j=2;
//	func(i, j);
//	system("pause");
//	return 0;
//}
//void func(int n)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i ; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 9;
//	func(n);
//	system("pause");
//return 0;
//}
void func(int n,int m)
{
	int year;
	for (year = n; year <= m; year++)
	{
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		{
			printf("%d ", year);
		}
	}
	printf("\n");
}
int main()
{
	int n,m;
	printf("ÇëÊäÈëÊ±¼ä¶Î£º");
	scanf_s("%d%d", &n,&m);
	func(n, m);
	system("pause");
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("%d  %d", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = {12,3,53,65,76,23,97,56,3654,546};
//	int max=0x80000000;
//	int min=0x80000000;
//	int i;
//	for (i = 0; i <= 10; i++)
//	{
//		if (max > arr[i])
//		{
//			min = max;
//			max = arr[i];
//		}
//		else if (min < arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d ", min);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	int temp = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//
//	system("pause");
//	return 0;
//}