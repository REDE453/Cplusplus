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
int Strcmp(char* str1, char* str2)
{
	assert(str1 != NULL && str2 != NULL);

}
char* Strncpy(char* destination, char* source, size_t num)
{
	assert(destination!=NULL&&source!=NULL)
}
char* Strncat(char* destination, char* source, size_t num)
{

}
char* Strncmp(char* str1, char* str2, size_t num)
{

}
int main()
{
	char str1[] = "hehe";
	char str2[]= "hahahaha";
	Strcpy(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	system("pause");
	return 0;
}