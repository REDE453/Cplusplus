#include<stdio.h>
#include<Windows.h>
//�ַ�ָ��
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
//	char *a = "hello world";//��hello world���׵�ַ�ŵ����ַ�ָ��a��
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
	//������arr����ʾ��Ԫ�صĵ�ַ
	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
	//��������ָ��������
	print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}