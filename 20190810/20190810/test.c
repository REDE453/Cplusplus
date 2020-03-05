#include<stdio.h>
#include<windows.h>
//int NumberOF1(unsigned int n)
//{
//	int a=0 ,b;
//	while(n!=0)
//	for (b = 0; b < 32; b++)
//	{
//		if ((n&a) !=0);
//		{
//			a++;
//		}
//		n=n >> 1;
//	}
//	return a;
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	NumberOF1(n);
//	printf("%d\n", NumberOF1(n));
//	system("pause");
//	return 0;
//}
//int NumberOF(unsigned int n)
//{
//	int a = 0;
//	while(n!=0)
//	{
//		a++;
//		n = n & (n - 1);
//	}
//	return a;
//}
//int main()
//{
//	int n ;
//	scanf_s("%d", &n);
//	printf("%d\n", NumberOF(n));
//	system("pause");
//	return 0;
//}
//int main()
//{
//
//	system("pause");
//	return 0;
//}
//void func(int num)
//{
//	int i = 0;
//	printf("奇数序列为：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数序列为：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num;
//	scanf_s("%d", &num);
//	func(num);
//	system("pause");
//	return 0;
//} 
//void func(int num)
//{
//	if (num != 0)
//	{
//		printf("%d ", num % 10);
//		func(num / 10);
//	}
//}
//int main()
//{
//	int num;
//	scanf_s("%d", &num);
//	func(num);
//	system("pause");
//	return 0;
//}
//int func(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		count++;
//		c &= (c - 1);
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d%d", &a, &b);
//	printf("%d\n", func(a, b));
//	system("pause");
//	return 0;
//}
void func(int num)
{
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
}
int main()
{
	int num;
	scanf_s("%d", &num);
	func(num);
	system("pause");
	return 0;
}