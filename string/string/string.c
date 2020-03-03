#include<stdio.h>
#include<Windows.h>
//int main()
//{
//	const char*str1 = "abcdef";
//	const char*str2 = "bbc";
//	if (strlen(str1) - strlen(str2) > 0)
//	{
//		printf("str1>str2\n");
//	}
//	else
//	{
//		printf("str1<str2\n");
//	}
//	system("pause");
//	return 0;
//}
void my_strlen(const char*str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	printf("%d\n", count);
}
void test()
{
	const char* str1 = "abcd";
	my_strlen(str1);
}
int main()
{
	test();
	system("pause");
	return 0;
}
