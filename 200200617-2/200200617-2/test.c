#include"stdio.h"
#include<stdint.h>
#include<Windows.h>
//在C语言中枚举和int等价
//enum也相当于一种自定制的类型
//
enum Sex
{
	MALE,
	FEMALE,
	UNKNOWN,
};
typedef enum Sex Sex;
//创建了一种类型
//联合体和结构体的差别主要就在内存布局上
//联合体的内存布局是所有成员重叠在一块内存区域上
union Un
{
	int a;
	int b;
};
union IP
{
	uint32_t data;
	uint8_t dec[4];
};
//判断大小端
//int IslittleEnd()
//{
//	int a = 0x1;
//	char* b = (char*)&a;
//	if (*b == 0x0)
//	{
//		return 0;
//	}
//	return 1;
//}

int IslittleEnd()
{
	union Un u;
	u.a = 0x1;
	if (u.b == 0x1)
	{
		return 1;
	}
	return 0;
}
int main()
{
	/*enum Sex s = 100;
	printf("%d\n", s);*/
	/*union Un u;
	u.a = 10;
	u.b = 20;
	printf("%d\n", u.a);*/
	//union IP ip;
	//ip.data = 0x12345678;
	//printf("%d.%d.%d.%d\n", ip.dec[0], ip.dec[1], ip.dec[2], ip.dec[3]);
	system("pause");
	return 0;
}
