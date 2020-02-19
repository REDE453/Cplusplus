#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<assert.h>
#include<string.h>
#define PERSONS_MAX_SIZE 200
#define NAME_MAX_SIZE 1024
#define PHONE_MAX_SIZE 100
//通过结构体表示一个现实中的事物，叫抽象。
typedef struct PersonInfo
{
	char name[NAME_MAX_SIZE];
	char phone[PHONE_MAX_SIZE];
}PersonInfo;
typedef struct AddBook
{
	PersonInfo persons[PERSONS_MAX_SIZE];
	int size;				//当前数组中有效元素的个数
}AddBook;
void Init(AddBook* addr_book)
{
	assert(addr_book != NULL);
	addr_book->size = 0;
	for (int i = 0; i < PERSONS_MAX_SIZE; i++)
	{
		memset(addr_book->persons[i].name,0, NAME_MAX_SIZE);
		memset(addr_book->persons[i].phone, 0,PHONE_MAX_SIZE);

	}

}
void Add(AddBook*addr_book)
{
	assert(addr_book != NULL);
	printf("新增联系人!\n");
	if (addr_book->size >= PERSONS_MAX_SIZE)
	{
		printf("当前通讯录已满，需要删除一个再新增！\n");
		return;
	}
	PersonInfo* p = &addr_book->persons[addr_book->size];
	printf("请输入新联系人姓名：");
	scanf("%s",p-> name);
	printf("请输入新联系人电话：");
	scanf("%s", p->phone);
	++addr_book->size;
	printf("新增联系人成功！\n");
}
void Remove(AddBook*addr_book)
{

}
void PrintALL(AddBook*addr_book)
{
	assert(addr_book != NULL);
	printf("===============\n");
	for (int i = 0; i < addr_book->size; ++i)
	{
		PersonInfo*p = &addr_book->persons[i];
		printf("[%d] %s:%s\n", i, p->name, p->phone);
	}
	printf("当前共有%d条记录\n");
	printf("===============\n");
}
void Update(AddBook*addr_book)
{
	assert(addr_book != NULL);
	printf("更新联系人记录！\n");
	if (addr_book->size == 0)
	{
		//通讯录为空！不应该修改
		printf("当前通讯录为空，无法修改！\n");
		return;
	}
	printf("请输入你要输入联系人记录的序号：");
	int index = 0;
	scanf("%d", &index);
	if (index == 0 || index >= addr_book->size)
	{
		printf("你的输入有误！[0~&d]\n", addr_book->size - 1);
		return;
	}
	PersonInfo* p = &addr_book->persons[index];
	printf("当前姓名为：%s\n请输入修改之后的姓名（*表示该字段不修改）:", p->name);
	char name[NAME_MAX_SIZE] = { 0 };
	scanf("%s", name);
	if (strcmp(name, "*") != 0)
	{
		str(p->name, name);
	}
	printf("当前电话为：%s\n请输入修改之后的电话(*表示该字段不修改)：", p->phone);
	char phone[PHONE_MAX_SIZE] = { 0 };
	scanf("%s", phone);
	if (strcmp(phone, "*") != 0)
	{
		str(p->phone, phone);
	}
	printf("修改完成！\n");
}
int Menu()
{
	printf("===============\n");
	printf("欢迎来到通讯录程序\n");
	printf("1.显示所有联系人信息\n");
	printf("2.新增联系人信息\n");
	printf("3.修改联系人信息\n");
	printf("4.删除联系人信息\n");
	printf("5.退出通讯录\n");
	printf("===============\n");
	printf("请输入你的选择:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
AddBook addr_book;
typedef void(*Func)(AddBook*);
int main()
{
	Init(&addr_book);
	Func func_table[] =
	{
		NULL,
		PrintALL,
		Add,
		Update,
		Remove
	};
	while (1)
	{
		int choice = Menu();
		if (choice < 0 || choice>4)
		{
			printf("你的输入有误！请重新输入！\n");
			continue;
		}
		if (choice == 0)
		{
			printf("goodbye!\n");
			break;
		}
		system("cls");
		func_table[choice](&addr_book);
	}
	system("pause");
	return 0;
}