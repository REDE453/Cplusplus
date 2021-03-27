#pragma once
#include <string>
#include <unordered_map>
#include <unordered_set>
#include "md5.h"

class FileManger
{
public:
	//扫描磁盘信息
	void scannereDir(const std::string& path);
	//获取重复的文件
	void getCopList();
	//获取文件的MD5
	void getMd5toFiles();
	//删除重复的文件，相同内容的文件只保留一份
	void deleteByName(const std::string& name);
	void deleteByMD5(const std::string& md5);
	void deleteAllCopy();
	//模糊删除，删除包含输入字符的文件中重复的文件
	void deleteByMatchName(const std::string& MatchName);
	//打印
	void showCopyList();
	void showAllFile();
	void showMD5Map();
private:
	std::unordered_set<std::string> _files;
	//MD5向文件的映射
	std::unordered_multimap<std::string, std::string> _md5toFiles;
	//文件向MD5的映射
	std::unordered_map<std::string, std::string> _filestoMD5;
	MD5 _md5;
};