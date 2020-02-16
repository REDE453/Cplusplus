#include<stdio.h>
#include<Windows.h>
//字符指针
//int main()
//{
//	char ch = 'a';
//	char *p = &ch;
//	*p = 'a';
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char *a = "hello world";//将hello world的首地址放到了字符指针a中
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0; #include <stdio.h>
//		int main()
//	{
//		char str1[] = "hello bit.";
//		char str2[] = "hello bit.";
//		char *str3 = "hello bit.";
//		char *str4 = "hello bit.";
//		if (str1 == str2)
//			printf("str1 and str2 are same\n");
//		else
//			printf("str1 and str2 are not same\n");
//		if (str3 == str4)
//			printf("str3 and str4 are same\n");
//		else
//			printf("str3 and str4 are not same\n");
//		system("pause");
//		return 0;
//	}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	system("pause");
//	return 0;
//}
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	print_arr1(arr, 3, 5);
	//数组名arr，表示首元素的地址
	//但是二维数组的首元素是二维数组的第一行
	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
	//可以数组指针来接收
	print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}