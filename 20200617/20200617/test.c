#include"stdio.h"
#include<Windows.h>
//自定制类型,仍然需要结构体能够引用自身
// struct Student
//{
//	char name[1024];
//	int score;
//	struct Student* a;
//};
//匿名结构体没用
//匿名函数很有用C语言不支持（lambda表达式)
//struct Test1
//{
//	char x;
//	int y;
//}Test1;
//typedef struct test
//{
//	short a;                   //8  2-->偏移量为0  0
//	char b;                    //8  1-->偏移量为1  3
//	struct Test1 c;         //8  4-->偏移量为4  4
//	char d;                    //8   1-->偏移量为1  9
//	double e;                //8   8-->偏移量为8  16
//	int f;                        //8   4-->偏移量为4  24
//}test;                           //结构体总大小为32
//int main()
//{
//	test t;
//	printf("%p\n", &t);
//	printf("%p\n",&t.a);
//	printf("%p\n",&t.b);
//	printf("%p\n",&t.d);
//	printf("%p\n", &t.e);
//	printf("%p\n", &t.f);
//	printf("%p\n", &t.c);
//	printf("%d\n",sizeof(t));
//	system("pause");
//	return 0;
//}
#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//}S1;
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为8
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//}S2;
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	system("pause");
//	return 0;
//}
struct S
{
	int data[1024];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //传结构体
	print2(&s); //传地址
	system("pause");
	return 0;
}
