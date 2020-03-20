#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
//void func2(int *arr[5])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int main()
//{
//	int arr[5] = { 12,32,43,5,2 };
//	int arr2[5] = { 12,32,43,5,2 };
	//func(arr);
//	func2(arr2);
//	system("pause");
//	return 0;
//}
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//int main()
//{
//	int arr[10] = {0};
//	int *arr2[20] = {0};
//	test(arr);
//	test2(arr2);
//}
//int main()
//{
//	int i, j, k;
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 0; j <= n; j++)
//		{
//			printf()
//		}
//	}
//	system("pause");
//	return 0;
//}
//void func(char str1[], char str2[])
//{
//	if (strstr(str1, str2) == 1)
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("没找到");
//	}
//	
//}
//int main()
//{
//	char str1[] = { "asdfgh" };
//	char str2[] = { "gh" };
//	
//	system("pause");
//	return 0;
//}
int main()
{
	//	struct S1
	//	{
	//		double d;
	//		char c;
	//		int i;
	//	};
	//	struct s2
	//	{
	//		char c1;
	//		struct  S1 S1;
	//		double d;
	//	};
	//	printf("%d\n", sizeof(struct S2));
	//	system("pause");
	//	return 0;
	//
	//}
	//struct S3
	//{
	//	double d;
	//	char c;
	//	int i;
	//};
	//printf("%d\n", sizeof(struct S3));
	//struct S4
	//{
	//	char c1;
	//	struct S3 s3;
	//	double d;
	//};
	//printf("%d\n", sizeof(struct S4));
	struct A
	{
		int _a : 2;
		int _b : 5;
		int _c : 10;
		int _d : 30;
	};
	printf("%d\n", sizeof(struct A));

	system("pause");
	return 0;
}