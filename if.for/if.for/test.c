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
//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		printf("成年\n");
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int age;
	scanf("%d", &age);
	if (age < 20)
	{
		printf("少年\n");
	}
	else if (age >= 20 && age < 30)
	{
		printf("青年\n");
	}
	else if (age >= 30 && age < 50)
	{
		printf("中年\n");
	}
	else
	{
		printf("老年\n");
	}
	system("pause");
	return 0;
}
