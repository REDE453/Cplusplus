#include"stdio.h"
#include<Windows.h>
//�Զ�������,��Ȼ��Ҫ�ṹ���ܹ���������
// struct Student
//{
//	char name[1024];
//	int score;
//	struct Student* a;
//};
//�����ṹ��û��
//��������������C���Բ�֧�֣�lambda���ʽ)
//struct Test1
//{
//	char x;
//	int y;
//}Test1;
//typedef struct test
//{
//	short a;                   //8  2-->ƫ����Ϊ0  0
//	char b;                    //8  1-->ƫ����Ϊ1  3
//	struct Test1 c;         //8  4-->ƫ����Ϊ4  4
//	char d;                    //8   1-->ƫ����Ϊ1  9
//	double e;                //8   8-->ƫ����Ϊ8  16
//	int f;                        //8   4-->ƫ����Ϊ4  24
//}test;                           //�ṹ���ܴ�СΪ32
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
#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//}S1;
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ8
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//}S2;
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
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
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //���ṹ��
	print2(&s); //����ַ
	system("pause");
	return 0;
}
