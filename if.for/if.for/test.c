#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int age;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年\n");
	}
	else
	{
		printf("成年\n");
	}
	system("pause");
	return 0;
}

