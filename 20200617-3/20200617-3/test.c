#include"stdio.h"
#include<Windows.h>
int func()
{
	//第一个malloc无法释放
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
	//内存访问越界
	int* p = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; ++i)
	{
		p[i] = i;
	}
	free(p);
}
void func4()
{
	//申请内存过大返回NULL;
	int* p = (int*)malloc(sizeof(int)*INT_MAX);
	printf("%p\n", p);
}
void func5()
{
	int* p = (int*)malloc(sizeof(int) * 10);
	free(p);
	//内存访问越界
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
	////p相当于一个10个元素的int数组的首地址
	//char* p = (char*)malloc(4 * sizeof(char));

	//for (int i = 0; i < 4; ++i)
	//{
	//	p[i] = 'a';
	//}
	//如果不进行free就会造成内存泄漏
	//导致内存在反复申请过程中被耗尽后续在申请就会申请失败导致程序崩溃
	//潜伏期很长不同程序泄漏速度不一样
	//一但发作，极难调试
	//避免内存泄漏
	//1.程序员个人水平
	//2.C++智能指针能一定程度解决这个问题
	//3.JAVA等大部分现代编程语言使用垃圾回收机制(GC)
	//GC机制最大的缺点在于STW问题
/*
	free(p);
	printf("%c\n", *p);*/
	//if (p == NULL)
	//{
	//	//错误处理
	//	return 1;




	//}
	/*for (int i = 0; i < 10; ++i)
	{
		p[i] = i;
	}*/
	system("pause");
	return 0;
}