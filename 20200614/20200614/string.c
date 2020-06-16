#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include<string.h>
#include<assert.h>
#include<Windows.h>
size_t  Strlen(const char* str)
{
	assert(str != NULL);
	size_t length = 0;
	for (; str[length] != '\0'; ++length);
	return length;
}
char* Strcpy(char* destination, char* source)
{
	//判断参数有效性
	//c语言中无法避免野指针
	assert(source != NULL && destination != NULL);
	int i = 0;
	for (; source[i] != '\0'; ++i)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';
	return destination;
}
char* Strcat(char* destination, char* source)
{
	assert(destination != NULL && source != NULL);
	char* p = destination;
	while (*p != '\0')
	{
		++p;
	}
	//Strcpy(p, source);
	while (*source != '\0')
	{
		*p = *source;
		++p;
		++source;
	}
	*p = '\0';
	return destination;
}
int Strcmp(const char* str1,const char* str2)
{
	assert(str1 != NULL && str2 != NULL);
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 < *str2)
		{
			return -1;
		}
		else if (*str1 > *str2)
		{
			return 1;
		}
		else
		{
			++str1;
			++str2;
		}
	}
	//当循环结束，str1和str2至少有一个是\0;
	if (*str1 < *str2)
	{
		//*str1<*str的话此时str1一定遇到了\0；str2一定不是\0;
		//所以str1比较短所以更小
		return -1;
	}
	else if (*str1 > *str2)
	{
		//此时str1一定不是\0.str2一定遇到了\0
		//所以str2比较短所以更小
		return 1;
	}
	else
	{
		//此时两者一定都是\0;
		//所以两者相等
		return 0;
	}
	return 0;
}
char* Strncpy(char* destination, char* source, size_t num)
{
	assert(destination != NULL && source != NULL);
	char* temp = destination;
	while (num)
	{
		if ((*temp = *source) != 0)
		{
			++temp;
			++source;
			num--;
		}
	}
	return destination;
	return 0;
}
char* Strncat(char* destination, char* source, size_t num)
{
	assert(destination != NULL && source != NULL&&num==0);
	return destination;
	char* pdest = destination;
	while (*pdest != '\0')
	{
		++pdest;
	}
	for (size_t i = 0; i < num; ++i)
	{
		*pdest = *source;
		++pdest;
		++source;
	}
	return destination;
}
char* Strncmp(char* str1, char* str2, size_t num)
{
	assert(str1 != NULL && str2 != NULL&&num==0);
	return 0;
	while (*str1 != '\0' && *str2 != '\0'&&num==0)
	{
		if (*str1 < *str2)
		{
			return -1;
		}
		else if (*str1 > *str2)
		{
			return 1;
		}
		else
		{
			++str1;
			++str2;
		}
	}
	if (*str1 < *str2)
	{
		return -1;
	}
	else if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
const char* Strstr(const char* str1, const char* str2)
{
	//assert(str1 != NULL, str2 != NULL);
	if (str1 == NULL || str2 == NULL)
	{
		return NULL;
	}
	if (*str2 == '\0')
	{
		//str2是一个空字符串
		return NULL;
	}
	const char* ptr1 = str1;
	while (*ptr1 != '\0')
	{
		const char* ptr2 = ptr1;
		const char* ptr3 = str2;
		//两个字符串进行比较
		//如果两个字符串都没有到达末尾，就比较下一个字符
		while (*ptr2 != '\0'&&*ptr3 != '\0' && (*ptr2 == *ptr3))
		{
			++ptr2;
			++ptr3;
		}
		if (*ptr3 == '\0')
		{
			//找到了
			return ptr1;
		}
		//else if (*ptr2 = '\0')
		//{
		//	++ptr1;

		//}
		else
		{
			//如果*ptr2=='\0或者两个指针内容不相等
			//都是++ptr1
			++ptr1;
		}
	}
	//如果while循环结束，没找到
	return NULL;
}
//函数的返回值表示切分出的记过里面有几个元素
int Split(char* src,const char* delimiters,char* output[])
{
	//输出的数组的下标位置
	int output_index = 0;
	char* p = strtok(src, delimiters);
	while (p != NULL)
	{
		//切分结过放到数组中
		output[output_index] = p;
		output_index++;
		//strtok里面有个static变量记录了上次切分的位置
		//线程不安全
		p = strtok(NULL, delimiters);
	}
	return output_index;
}
void* Memcpy(void* destination, const void* source, size_t num)
{
	if (destination == NULL || source == NULL||num==0)
	{
		return destination;
	}
	char* pdest = (char*)destination;
	char* psrc = (char*)source;
	for (size_t i = 0; i < num; ++i)
	{

		*pdest = *psrc;
		++pdest;
		++psrc;
	}
	return destination;
}
void *Memove(void* destination, const void * source, size_t num)
{
	if (destination == NULL || source == NULL||num==0)
	{
		return destination;
	}
	//1.区分出当前缓冲区是否重叠
	char* pdest = (char*)destination;
	char* psrc = (char*)source;
	if (pdest >= psrc && pdest < psrc + num)
	{
		//缓冲区重叠，从后往前拷贝
		pdest = pdest + num - 1;
		psrc = psrc + num - 1;
		for (size_t i = 0; i < num; ++i)
		{
			*pdest = *psrc;
			--pdest;
			--psrc;
		}
	}
	else
	{
		//不重叠，正常拷贝
		for (size_t i = 0; i < num; ++i)
		{
			*pdest = *psrc;
			++pdest;
			++psrc;
		}
	}
}
int Memcmp(const void* ptr1, const void* ptr2, size_t num)
{
	assert(ptr1 != 0 && ptr2 != 0 && num > 0);
	char* p1 = (char*)ptr1;
	char* p2 = (char*)ptr2;
	for (size_t i = 0; i < num; ++i)
	{
		if (*p1 < *p2)
		{
			return -1;
		}
		else if (*p1 > *p2)
		{
			return 1;
		}
		else
		{
			++p1;
			++p2;
		}
	}
	return 0;
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	//把arr2拷贝给arr1
	Memcpy(arr, arr2, sizeof(arr2));
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", arr[i]);
	}
	/*
	char str[] = "aaa,bbb,ccc,ddd";
	char* output[100] = { 0 };
	int n = Split(str, ",", output);
	for (int i = 0; i < n; ++i)
	{
		printf("%s\n", output[i]);
	}*/
	/*char* pch = strtok(str, ",");
	while (pch != NULL)
	{
		printf("%s\n",pch);
		pch = strtok(NULL, ",");
	}*/
	/*char str1[] = "hello world";
	char str2[]="world";
	char* result = Strstr(str1, str2);
	if (result == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了\n");
	}*/
	//Strncpy(str1, str2, 10 - 1);
	//strcpy(str1, str2);
	//printf("%s\n", str1);
	//Strcpy(str1, str2);
	//int ret = Strcmp(str1, str2);
	//if (ret < 0)
	//{
	//	printf("str1<str2\n");
	//}
	//else if (ret == 0)
	//{
	//	printf("str1=str2\n");
	//}
	//else
	//{
	//	printf("str1>str2\n");
	//}
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	system("pause");
	return 0;
}