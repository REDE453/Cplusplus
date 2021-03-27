#define _CRT_SECURE_NO_WARNINGS
#include "fileMangerTool.h"


void fileManagerTool::scanner()
{
	cout << "请输入要扫描的文件夹：" << endl;
	std::string path;
	getline(cin, path);
	_fm.scannereDir(path);
}

void fileManagerTool::deletaByMD5()
{
	cout << "请输入要删除的文件的MD5值：" << endl;
	std::string md5;
	cin >> md5;
	_fm.deleteByMD5(md5);
}

void fileManagerTool::deleteByName()
{
	cout << "请输入要删除的文件名：" << endl;
	std::string fileName;
	getline(cin, fileName);
	_fm.deleteByName(fileName);
}

void fileManagerTool::deleteAllCopy()
{
	_fm.deleteAllCopy();
}

void fileManagerTool::deleteFUzzyMatchCopy()
{
	cout << "请输入匹配的文件名：" << endl;
	std::string match;
	getline(cin, match);
	_fm.deleteByMatchName(match);
}

void fileManagerTool::showCopy()
{
	_fm.showCopyList();
}

void fileManagerTool::showAllFile()
{
	_fm.showAllFile();
}