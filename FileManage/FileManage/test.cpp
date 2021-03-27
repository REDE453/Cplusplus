#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
//#include "Md5.h"
#include "fileutil.h"
#include "fileManager.h"
#include "fileMangerTool.h"

using std::cout;
using std::endl;

//void testStringMD5()
//{
//	MD5 md5;
//	std::string str = "123456789abcdefgh";
//	cout << md5.getStringMD5(str) << endl;
//	md5.reset();
//	std::string str2 = "123456789abcdefgi";
//	cout << md5.getStringMD5(str2) << endl;
//}
//
//void testHex()
//{
//	MD5 md5;
//	uint32 n = 0x23456789;
//	cout << md5.changeHex(n) << endl;
//}
//
void testFileMD5()
{
	MD5 md5;
	const char* filepath = "a.txt";
	//const char* filepath2 = "b.txt";

	cout << md5.getFileMD5(filepath) << endl;
	md5.reset();
	//cout << md5.getFileMD5(filepath2) << endl;
}

//void testSearch()
//{
//	std::string path;
//	cout << "please input search dir:" << endl;
//	getline(std::cin, path);
//	std::vector<std::string> subFiles;
//	searchDir(path, subFiles);
//	for (const auto& f : subFiles)
//	{
//		cout << f << endl;
//	}
//}

void testFM()
{
	FileManger fm;
	std::string path = "F:\\test";
	fm.scannereDir(path);
}


void menu()
{
	cout << "*********************************" << endl;
	cout << "1. 扫描" << endl;
	cout << "2. 显示所有文件" << endl;
	cout << "3. 显示重复文件" << endl;
	cout << "4. 删除指定文件名重复文件" << endl;
	cout << "5. 删除指定MD5相同的文件" << endl;
	cout << "6. 删除所有重复文件" << endl;
	cout << "7. 模糊匹配删除" << endl;
	cout << "0. 退出" << endl;
}

void testfileMangerTool()
{
	fileManagerTool fmt;
	int input;
	do
	{
		menu();
		std::string garbage;
		cout << "请输入选择：";
		cin >> input;
		getline(cin, garbage);
		switch (input)
		{
		case 1:
			fmt.scanner();
			break;
		case 2:
			fmt.showAllFile();
			break;
		case 3:
			fmt.showCopy();
			break;
		case 4:
			fmt.deleteByName();
			break;
		case 5:
			fmt.deletaByMD5();
			break;
		case 6:
			fmt.deleteAllCopy();
			break;
		case 7:
			fmt.deleteFUzzyMatchCopy();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input != 0);
}

int main()
{
	//MD5 md5;
	//testHex();
	//testStringMD5();
	//testFileMD5();
	//testSearch();
	//testFM();
	//std::unordered_set<std::string> subFiles;
	//searchDir("F:CPlusePluse", subFiles);
	testfileMangerTool();
	return 0;
}