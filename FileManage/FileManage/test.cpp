#include<iostream>
#include<Windows.h>
#include"Md5.h"
#include"fileutil.hpp"
using namespace std;
void testHex()
{
	MD5 md5;
	unit32 num = 0x23456789; //89674523
	cout << md5.changeHex(num) << endl;
}
void testStringMD5()
{
	MD5 md5;
	string str = "123456789abcdefgh";
	cout << md5.getStringMD5(str) << endl;
	string str2 = "123456789abcdefgi";
	cout << md5.getStringMD5(str2) << endl;
}
void testFileMD5()
{
	MD5 md5;
	const char* filepath1 = "md5test1.txt";
	const char* filepath2 = "md5test2.txt";
	cout << md5.getFileMD5(filepath1) << endl;
	cout << md5.getFileMD5(filepath2) << endl;
}
void testSearch()
{
	string path;
	cout << "please input search dir:" << endl;
	getline(cin, path);
	vector<string>subFiles;
	searchDir(path, subFiles);
	for (const auto& f : subFiles)
	{
		cout << f << endl;
	}
}
int main()
{
	//testHex();
	//testStringMD5();
	//testFileMD5();
	testSearch();
	system("pause");
 	return 0;
} 