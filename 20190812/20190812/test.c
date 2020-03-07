#include<stdio.h>
#include<windows.h>
//#include<stdlib.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int i;
//	for (i = 0; i <= 31; i++)
//	{
//
//	}
//}
//int main()
//{
//
//	system("pause");
//	return 0;
//}
//int func(int x, int y)
//{
//	int tmp = 0;
//	do
//	{
//		tmp = x ^ y;
//		y = x & y;
//		x = tmp;
//		y <<= 1;
//	} while (y != 0);
//	return x;
//}
//int avg(int x, int y)
//{
//	return func(((x^y) >> 1), x&y);
//}
//int main()
//{
//	int x, y;
//	scanf_s("%d%d", &x, &y);
//	func(x, y);
//	printf("%d\n", avg(x,y));
//	system("pause");
//	return 0;
//}
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个。
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//void func()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer = 'C') + (killer = 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//}
//int main()
//{
//	func();
//	system("pause");
//	return 0;
//}
unsigned int  func(unsigned int value)
{
	int i = 0;
	for (i = 0; i <= 32; i++)
	{
		if ((value & 1) == 1)
		{
			return 1;
		}
		value << =1;
	}
	return value;
}
int main()
{
	int value;
	func(value);
	printf("%d", value);
	system("pause");
	return 0;
}