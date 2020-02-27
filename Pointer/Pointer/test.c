#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
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
	//数组名arr，表示首元素的地址
	//但是二维数组的首元素是二维数组的第一行
	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
	//可以数组指针来接收
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
//func就是一个类型，int(*)(int,int)
//typedef int(*func)(int, int);
////()是函数调用运算符
//int main()
//{
//函数指针主要应用场景：回调函数
//	test();
	//void(*p)()=test;
	//void(*p2)(int) = test2;
	//int(*p3)(int, int) = add;
	//func p4 = add;
	//函数指针具有一个其他指针不具备的能力（）操作，调用操作
	//printf("%p\n", p3(10, 20));
	//p变量就是一个函数指针变量，类型具体就是void(*)()
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
//	//1.0强制转换成一个函数指针void(*)()
//	//2.对函数指针引用，得到了对应的函数
//	//3.调用这个函数
//	void(*signal(int, void(*)(int)))(int);//函数声明
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
{*/	//圈复杂度：用来衡量一段代码复杂程度
	//有几个分支/循环语句就认为圈复杂度就是几
	//圈复杂度越高越复杂
	//函数指针数组
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
	//	printf("请选择：");
	//	scanf("%d", &input);
	//	switch (input)
	//	{
	//	case 1:
	//		printf("输入操作数：");
	//		scanf("%d %d", &x, &y);
	//		ret = Add(x, y);
	//		break;
	//	case 2:
	//		printf("输入操作数：");
	//		scanf("%d %d", &x, &y);
	//		ret = Sub(x, y);
	//		break;
	//	case 3:
	//		printf("输入操作数：");
	//		scanf("%d %d", &x, &y);
	//		ret = Mul(x, y);
	//		break;
	//	case 4:
	//		printf("输入操作数：");
	//		scanf("%d %d", &x, &y);
	//		ret = Div(x, y);
	//		break;
	//	default:
	//		printf("选择错误\n");
	//		break;
	//	}
	//	printf("ret = %d\n", ret);
	//}
	//第二种
//	typedef int(*func)(int, int);
//	func arr[] = {
//		Add,
//		Sub,
//		Mul,
//		Div
//	};
//	if (choice < 1 || choice>4)
//	{
//		printf("你的输入有误\n");
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
////Cmp是一个函数指针类型，Cmp对应到的函数应该是有两个int参数，同时返回值也是int
//typedef int(*Cmp)(int, int);
////函数指针/回调函数通过回调函数来指定比较规则
//void BubbleSort(int arr[], int size,Cmp cmp)
//{
//	//每次找最小元素
//	//[0,bound)已排序区间
//	//(bound,size]待排序区间
//	int bound = 0;
//	//第一重循环，每次循环都找出一个最小的元素并放在靠前的位置
//	for (; bound < size; ++bound)
//	{
//		//第二重循环，具体完成找找最小的过程
//		for (int i = size - 1; i > bound; --i)
//		{
//			if (cmp(arr[i - 1] ,arr[i]))
//			{
//				//当前是升序排序，如果前一个元素大于后一个元素
//				//说明不符合当前的排序要求，就需要交换两个元素
//				Swap(&arr[i - 1], &arr[i]);
//			}
//		}
//	}
//}
////////////////////////////////////////////////////////
/////这是分割线，分割线以上的代码，可能是其他人提供的
//////////////////////////////////////////////////////
//int Less(int x, int y)
//{
	//这个函数指定了升序排序的规则
	//x是前一个元素，y是后一个元素
	//这个函数返回一个真假值，需要交换的时候返回真不需要交换的时候返回假
//	if (x < y)
//	{
//		return 0;
//	}
//	return 1;
//}
//int Greater(int x, int y)
//{
//		//这个函数指定了降序排序的规则
	//x是前一个元素，y是后一个元素
	//这个函数返回一个真假值，需要交换的时候返回真不需要交换的时候返回假
//	if (x > y) 0
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int arr1[] = { 9,5,3,7 };
//	//升序排序
//	BubbleSort(arr1, 4,Less);
//	int arr2[] = { 2,4,6,5 };
//	//降序排序
//	BubbleSort(arr2, 4, Greater);
//	system("pause");
//	return 0;
//}