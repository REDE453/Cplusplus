#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "fileutil.h"

void searchDir(const std::string& path, std::unordered_set<std::string>& subFiles)
{
	std::string mathFile = path + "\\" + "*.*";
	_finddata_t fileAttr;
	long handle = _findfirst(mathFile.c_str(), &fileAttr);
	if (handle == -1)
	{
		perror("search failed !");
		std::cout << mathFile << std::endl;
		return;
	}
	do
	{
		//相与为0表明不是文件，是文件夹
		if (fileAttr.attrib & _A_SUBDIR)
		{
			if (strcmp(fileAttr.name, ".") != 0 && strcmp(fileAttr.name, "..") != 0)
				searchDir(path + "\\" + fileAttr.name, subFiles);
		}
		else
		{
			subFiles.insert(path + "\\" + fileAttr.name);
		}
	} while (_findnext(handle, &fileAttr) == 0);
	_findclose(handle);
}

void deleteFile(const char* filename)
{
	if (remove(filename) == 0)
	{
		std::cout << "delete file: " << filename << "success" << std::endl;
	}
	else
	{
		perror("delete file failed");
	}
}