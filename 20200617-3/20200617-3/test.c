#include"stdio.h"
#include<Windows.h>
int func()
{
	//��һ��malloc�޷��ͷ�
	int* p = (int*)malloc(10 * sizeof(int));
	p = (int*)malloc(sizeof(int) * 10);
	free(p);
}
int func2()
{
	int* p = (int*)malloc(10 * sizeof(int));
	free(p);
	free(p);
}
void func3()
{
	//�ڴ����Խ��
	int* p = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; ++i)
	{
		p[i] = i;
	}
	free(p);
}
void func4()
{
	//�����ڴ���󷵻�NULL;
	int* p = (int*)malloc(sizeof(int)*INT_MAX);
	printf("%p\n", p);
}
void func5()
{
	int* p = (int*)malloc(sizeof(int) * 10);
	free(p);
	//�ڴ����Խ��
	p[0] = 10;
}
int main()
{
	int* p = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",p[i]);
	}
	//func4();
	////p�൱��һ��10��Ԫ�ص�int������׵�ַ
	//char* p = (char*)malloc(4 * sizeof(char));

	//for (int i = 0; i < 4; ++i)
	//{
	//	p[i] = 'a';
	//}
	//���������free�ͻ�����ڴ�й©
	//�����ڴ��ڷ�����������б��ľ�����������ͻ�����ʧ�ܵ��³������
	//Ǳ���ںܳ���ͬ����й©�ٶȲ�һ��
	//һ�����������ѵ���
	//�����ڴ�й©
	//1.����Ա����ˮƽ
	//2.C++����ָ����һ���̶Ƚ���������
	//3.JAVA�ȴ󲿷��ִ��������ʹ���������ջ���(GC)
	//GC��������ȱ������STW����
/*
	free(p);
	printf("%c\n", *p);*/
	//if (p == NULL)
	//{
	//	//������
	//	return 1;




	//}
	/*for (int i = 0; i < 10; ++i)
	{
		p[i] = i;
	}*/
	system("pause");
	return 0;
}