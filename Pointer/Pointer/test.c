#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
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
//	printf("arr=%p\n", arr);
//	printf("&arr=%p\n", &arr);
//	printf("arr+1=%p\n", arr+1);
//	printf("&arr+1=%p\n", &arr+1);
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
//void test()
//{
//	printf("hehe");
//}
//void test2(int a)
//{
//
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//func����һ�����ͣ�int(*)(int,int)
//typedef int(*func)(int, int);
////()�Ǻ������������
//int main()
//{
//����ָ����ҪӦ�ó������ص�����
//	test();
	//void(*p)()=test;
	//void(*p2)(int) = test2;
	//int(*p3)(int, int) = add;
	//func p4 = add;
	//����ָ�����һ������ָ�벻�߱��������������������ò���
	//printf("%p\n", p3(10, 20));
	//p��������һ������ָ����������;������void(*)()
//	//printf("%p\n", test);
//	printf("%p\n", &test);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	typedef void(*func)(int);
//
//	(*(void(*) ())0)  ();
//	//1.0ǿ��ת����һ������ָ��void(*)()
//	//2.�Ժ���ָ�����ã��õ��˶�Ӧ�ĺ���
//	//3.�����������
//	void(*signal(int, void(*)(int)))(int);//��������
//	func signal(int, func);
//	system("pause");
//	return 0;
//}
/*int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int main()
{*/	//Ȧ���Ӷȣ���������һ�δ��븴�ӳ̶�
	//�м�����֧/ѭ��������ΪȦ���ӶȾ��Ǽ�
	//Ȧ���Ӷ�Խ��Խ����
	//����ָ������
	//typedef int(*func)();
	//func arr[10];
	//system("pause");
	//return 0;
	//int x, y;
	//int input = 1;
	//int ret = 0;
	//while (input)
	//{
	//	printf("*************************\n");
	//	printf(" 1:add 2:sub \n");
	//	printf(" 3:mul 4:div \n");
	//	printf("*************************\n");
	//	printf("��ѡ��");
	//	scanf("%d", &input);
	//	switch (input)
	//	{
	//	case 1:
	//		printf("�����������");
	//		scanf("%d %d", &x, &y);
	//		ret = Add(x, y);
	//		break;
	//	case 2:
	//		printf("�����������");
	//		scanf("%d %d", &x, &y);
	//		ret = Sub(x, y);
	//		break;
	//	case 3:
	//		printf("�����������");
	//		scanf("%d %d", &x, &y);
	//		ret = Mul(x, y);
	//		break;
	//	case 4:
	//		printf("�����������");
	//		scanf("%d %d", &x, &y);
	//		ret = Div(x, y);
	//		break;
	//	default:
	//		printf("ѡ�����\n");
	//		break;
	//	}
	//	printf("ret = %d\n", ret);
	//}
	//�ڶ���
//	typedef int(*func)(int, int);
//	func arr[] = {
//		Add,
//		Sub,
//		Mul,
//		Div
//	};
//	if (choice < 1 || choice>4)
//	{
//		printf("�����������\n");
//		return 1;
//	}
//	ret = arr[choice - 1](num1, num2);
//	return 0;
//}
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
////Cmp��һ������ָ�����ͣ�Cmp��Ӧ���ĺ���Ӧ����������int������ͬʱ����ֵҲ��int
//typedef int(*Cmp)(int, int);
////����ָ��/�ص�����ͨ���ص�������ָ���ȽϹ���
//void BubbleSort(int arr[], int size,Cmp cmp)
//{
//	//ÿ������СԪ��
//	//[0,bound)����������
//	//(bound,size]����������
//	int bound = 0;
//	//��һ��ѭ����ÿ��ѭ�����ҳ�һ����С��Ԫ�ز����ڿ�ǰ��λ��
//	for (; bound < size; ++bound)
//	{
//		//�ڶ���ѭ�����������������С�Ĺ���
//		for (int i = size - 1; i > bound; --i)
//		{
//			if (cmp(arr[i - 1] ,arr[i]))
//			{
//				//��ǰ�������������ǰһ��Ԫ�ش��ں�һ��Ԫ��
//				//˵�������ϵ�ǰ������Ҫ�󣬾���Ҫ��������Ԫ��
//				Swap(&arr[i - 1], &arr[i]);
//			}
//		}
//	}
//}
////////////////////////////////////////////////////////
/////���Ƿָ��ߣ��ָ������ϵĴ��룬�������������ṩ��
//////////////////////////////////////////////////////
//int Less(int x, int y)
//{
	//�������ָ������������Ĺ���
	//x��ǰһ��Ԫ�أ�y�Ǻ�һ��Ԫ��
	//�����������һ�����ֵ����Ҫ������ʱ�򷵻��治��Ҫ������ʱ�򷵻ؼ�
//	if (x < y)
//	{
//		return 0;
//	}
//	return 1;
//}
//int Greater(int x, int y)
//{
//		//�������ָ���˽�������Ĺ���
	//x��ǰһ��Ԫ�أ�y�Ǻ�һ��Ԫ��
	//�����������һ�����ֵ����Ҫ������ʱ�򷵻��治��Ҫ������ʱ�򷵻ؼ�
//	if (x > y) 0
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int arr1[] = { 9,5,3,7 };
//	//��������
//	BubbleSort(arr1, 4,Less);
//	int arr2[] = { 2,4,6,5 };
//	//��������
//	BubbleSort(arr2, 4, Greater);
//	system("pause");
//	return 0;
//}