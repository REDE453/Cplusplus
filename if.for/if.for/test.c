#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
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
//		printf("δ����\n");
//	}
//	else
//	{
//		printf("����\n");
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
		printf("����\n");
	}
	else if (age >= 20 && age < 30)
	{
		printf("����\n");
	}
	else if (age >= 30 && age < 50)
	{
		printf("����\n");
	}
	else
	{
		printf("����\n");
	}
	system("pause");
	return 0;
}
