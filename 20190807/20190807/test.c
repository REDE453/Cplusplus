#include<stdio.h>
#include<windows.h>
//int mPow(int m, int n)
//{
//	if (n == 1)
//	{
//		return m;
//	}
//	return m * mPow(m, n - 1);
//}
//int main()
//{
//	int m, n;
//	scanf_s("%d%d", &m, &n);
//	mPow(m, n);
//	printf("%d\n", m * mPow(m, n - 1));
//	system("pause");
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	fib(n);
//	printf("%d\n ", fib(n - 1) + fib(n - 2));
//	system("pause");
//	return 0;
//}
//int fibNr(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	int an, an_1 = 1, an_2 = 1;
//	int i;
//	for (i = 3; i <= n; i++)
//	{
//		an = an_1 + an_2;
//		an_2 = an_1;
//		an_1 = an;
//	}
//	return an;
//}
//int main()
//{
//	int n,an=1;
//	scanf_s("%d", &n);
//	fibNr(n);
//	printf("%d\n", an);
//	system("pause");
//	return 0;
//}
//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	return n % 10 - DigitSum(n / 10);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	DigitSum(n);
//	printf("%d\n", n % 10 - DigitSum(n / 10));
//	system("pause");
//	return 0;
//}
//void reverse_string(char * str)
//{
//	if (*str)
//	{
//		int tmp;
//		int end = myStrlen(str) - 1;
//		tmp = *str;
//		*str = str[end];
//		str[end] = '\0';
//		reverse_string(str + 1);
//		str[end] = tmp;
//	}
//}
//int main()
//{
//	char *str;
//
//
//	system("pause");
//	return 0;
//}
//int myStrlen(const char * str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1 + myStrlen(str + 1);
//
//}
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = myStrlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//int mystrlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}