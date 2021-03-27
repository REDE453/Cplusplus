#define _CRT_SECURE_NO_WARNINGS
#include "fileMangerTool.h"


void fileManagerTool::scanner()
{
	cout << "������Ҫɨ����ļ��У�" << endl;
	std::string path;
	getline(cin, path);
	_fm.scannereDir(path);
}

void fileManagerTool::deletaByMD5()
{
	cout << "������Ҫɾ�����ļ���MD5ֵ��" << endl;
	std::string md5;
	cin >> md5;
	_fm.deleteByMD5(md5);
}

void fileManagerTool::deleteByName()
{
	cout << "������Ҫɾ�����ļ�����" << endl;
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
	cout << "������ƥ����ļ�����" << endl;
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