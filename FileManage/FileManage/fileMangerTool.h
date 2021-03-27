#pragma once
#include <iostream>
#include "fileManager.h"

using std::cout;
using std::cin;
using std::endl;

class fileManagerTool
{
public:
	void scanner();

	void deletaByMD5();

	void deleteByName();

	void deleteAllCopy();

	void deleteFUzzyMatchCopy();

	void showCopy();

	void showAllFile();

private:
	FileManger _fm;
};
