#include<stdio.h>
#include<windows.h>
void temp(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int a = 10, b = 20;
	temp(&a, &b);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}
int YEAR(int year)
{
	if ((year % 4 == 0 && year != 100) || (year % 400 == 0))
	{
		printf("是闰年\n");
		return 1;
	}
	printf("不是闰年\n");
	return 0;
}
int main()
{
	int year;
	scanf_s("%d", &year);
	YEAR(year);
	system("pause");
	return 0;
}
void M(int n)
{
	int a = 1, b = 1;
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%d ", a, b, a*b);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf_s("%d", &n);
	M(n);
	system("pause");
	return 0;
}
//int N(int n)
//{
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		if(n%i!=0)
//		{
//			printf("%d是素数\n",n);
//			return 1;
//		}
//		printf("%d不是素数\n", n);
//		return 0;
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	N(n);
//	system("pause");
//	return 0;
//}
//void init(int a)
//{
//
//}
//int main()
//{
//	int S[20];
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		scanf_s("%d", &S[i]);
//		printf("%d ", S[i]);
//	}
//	system("pause");
//	return 0;
//}
void new_line()
{
	printf("hehe\n");
}
	void three_line()
	{
		int i = 0;
		for (i = 0; i < 3; i++)
		{
			new_line();
		}
	}
int main()
{
	three_line();
	system("pause");
	return 0;
}

