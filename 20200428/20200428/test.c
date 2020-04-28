//#include<stdio.h>
//#include<Windows.h>
//int Strlen(const char*str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char *p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<Windows.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	scanf_s("%d",&n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}
int factorial(int n)
{
	int result = 1;
	while (n > 1)
	{
		result *= n;
		n -= 1;
	}
	return result;
}
//求第n个斐波那契数
int fib(int n)
{
	int result;
	int pre_result;
	int next_older_result;
	result = pre_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_older_result = pre_result;
		pre_result = result;
		result = pre_result + next_older_result;
	}
	return result;
}