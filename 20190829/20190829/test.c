#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<assert.h>
#include<string.h>
#define PERSONS_MAX_SIZE 200
#define NAME_MAX_SIZE 1024
#define PHONE_MAX_SIZE 100
//ͨ���ṹ���ʾһ����ʵ�е�����г���
typedef struct PersonInfo
{
	char name[NAME_MAX_SIZE];
	char phone[PHONE_MAX_SIZE];
}PersonInfo;
typedef struct AddBook
{
	PersonInfo persons[PERSONS_MAX_SIZE];
	int size;				//��ǰ��������ЧԪ�صĸ���
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
	printf("������ϵ��!\n");
	if (addr_book->size >= PERSONS_MAX_SIZE)
	{
		printf("��ǰͨѶ¼��������Ҫɾ��һ����������\n");
		return;
	}
	PersonInfo* p = &addr_book->persons[addr_book->size];
	printf("����������ϵ��������");
	scanf("%s",p-> name);
	printf("����������ϵ�˵绰��");
	scanf("%s", p->phone);
	++addr_book->size;
	printf("������ϵ�˳ɹ���\n");
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
	printf("��ǰ����%d����¼\n");
	printf("===============\n");
}
void Update(AddBook*addr_book)
{
	assert(addr_book != NULL);
	printf("������ϵ�˼�¼��\n");
	if (addr_book->size == 0)
	{
		//ͨѶ¼Ϊ�գ���Ӧ���޸�
		printf("��ǰͨѶ¼Ϊ�գ��޷��޸ģ�\n");
		return;
	}
	printf("��������Ҫ������ϵ�˼�¼����ţ�");
	int index = 0;
	scanf("%d", &index);
	if (index == 0 || index >= addr_book->size)
	{
		printf("�����������[0~&d]\n", addr_book->size - 1);
		return;
	}
	PersonInfo* p = &addr_book->persons[index];
	printf("��ǰ����Ϊ��%s\n�������޸�֮���������*��ʾ���ֶβ��޸ģ�:", p->name);
	char name[NAME_MAX_SIZE] = { 0 };
	scanf("%s", name);
	if (strcmp(name, "*") != 0)
	{
		str(p->name, name);
	}
	printf("��ǰ�绰Ϊ��%s\n�������޸�֮��ĵ绰(*��ʾ���ֶβ��޸�)��", p->phone);
	char phone[PHONE_MAX_SIZE] = { 0 };
	scanf("%s", phone);
	if (strcmp(phone, "*") != 0)
	{
		str(p->phone, phone);
	}
	printf("�޸���ɣ�\n");
}
int Menu()
{
	printf("===============\n");
	printf("��ӭ����ͨѶ¼����\n");
	printf("1.��ʾ������ϵ����Ϣ\n");
	printf("2.������ϵ����Ϣ\n");
	printf("3.�޸���ϵ����Ϣ\n");
	printf("4.ɾ����ϵ����Ϣ\n");
	printf("5.�˳�ͨѶ¼\n");
	printf("===============\n");
	printf("���������ѡ��:\n");
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
			printf("��������������������룡\n");
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