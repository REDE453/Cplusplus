#include<io.h>
#include<vector>
#include<unordered_set>
#include<iostream>
#include<string>
using namespace std;
void searchDir(const string& path, unordered_set<string>& subFiles)
{
	string matchFile = path + "\\" + "*.*";
	_finddata_t fileAttr;
	long handle = _findfirst(matchFile.c_str(), &fileAttr);
	if (handle == -1)
	{
		perror("search failed !");
		cout << matchFile << endl;
		return;
	}
	do
	{
		if (fileAttr. attrib & _A_SUBDIR)
		{
			if(strcmp(fileAttr.name,".")!=0 && strcmp(fileAttr.name,"..")!=0)
			//当前为目录，继续搜索
			searchDir(path + "\\" + fileAttr.name, subFiles);
		}
		else
		{
			subFiles.insert(fileAttr.name);
		}
	} while (_findnext(handle, &fileAttr) == 0);
	_findclose(handle);
}
void deletefile(const char* filename)
{
	if (remove(filename) == 0)
	{
		cout << "delete file:" << filename << "success!" << endl;
	}
	else
	{
		perror("delete file failed!");
	}
}