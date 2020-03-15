#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//int main() {
//	int a, b, c;
//	int max = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	 if (max < c)
//	{
//		max = c;
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}
//int main()
//{
	/*char *p = "abcdef";
	int a[6] = {1,2,3,4,5,6};
	printf("%d\n", *(a+4));*/
//	{
//		int a[5] = { 1,2,3,4,5 };
//		int*ptr = (int*)(&a + 1);
//		printf("%d,%d", *(a + 1), *(ptr - 1));
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int*)(&a + 1);
//	int*ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
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
//	int i;
//	double a = 1, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += a / i;
//		a *= -1;
//	}
//	printf("%f", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 12,32,43,645,65,76,34,87,98,10 };
//	int max = 0;
//	int i = 0;
//	max = arr[0];
//	for (i = 0; i < 10; i ++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	int tem = 0;
//	printf("请输入三个数：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, tem;
//	int i;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		for ( i = a; i >= 2; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				tem = i;
//				printf("最大公约数: %d\n", i);
//			}
//		}
//	}
//	else if (a > b)
//	{
//		for ( i = a; i >= 2; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				tem = i;
//				printf("最大公约数: %d\n", i);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		if (i / 10 == 9)
		{
			count++;
		}
		if (i % 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 9,8,7,6,5 };
//	int tem;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tem = a[i];
//		a[i] = b[i];
//		b[i] = tem;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b,c;
//	scanf("%d%d", &a, &b);
//	c = (a > b) ? b : a;
//	for ( c; c > 1; c--)
//	{
//		if (a%c == 0 && b%c == 0)
//		{
//			printf("%d", c);
//		}
//	}
//	system("pause");
//	return 0;
//}