#include<stdio.h>
#include<windows.h>
#include<assert.h>
//void func(int arr[])
//{
//	int pos;
//	int tem;
//	int i = 0;
//	int a=0;
//	int b=0;
//	for (i = 0; i < 6; i++)
//	{
//		tem ^= arr[i];
//		break;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((tem >> i) & 1));
//		{
//			pos = i;
//		}
//		for (i = 0; i < 6; i++)
//		{
//			if (1 == ((arr[i] >> pos) & 1))
//			{
//				a ^= arr[i];
//			}
//			else
//			{
//				b ^= arr[i];
//			}
//			printf("%d%d", a, b);
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,1,2 };
//	func(arr);
//	system("pause");
//	return 0;
//}
void func(int n)
{
	int i = 0;
	int count = n;
	for (i = 0; i < n; i++)
	{
		if (n % 2 != 0)
		{
			n += 1;
		}
		n = n / 2;
		count += n;
	}
	printf("%d\n", count);
}
int main()
{
	int n ;
	scanf_s("%d", &n);
	func(n);
	system("pause");
	return 0;
}
//char func(char *str1, char *str2)
//{
//	char *p= str1;
//	assert(str1 != 0);
//	assert(str2 != 0);
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char str1[] = { "asdfg" };
//	char str2[] = { 0 };
//	func(*str1,*str2);
//	printf("%s\n", func(str1, str2));
//	system("pause");
//	return 0;
//}