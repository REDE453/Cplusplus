#include<iostream>
#include<Windows.h>
#include<string>
#include"md5.h"
using namespace std;
void test()
{
	MD5 md5;
	unit32 n = 0x23456789;//
	cout << md5.changellex(n) << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}