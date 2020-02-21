#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	const char* str1 = "abcdef";
	const char*str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2>str1\n");
	}
	else {
		printf("str2<str1");
	}
	system("pause");
	return 0;
}