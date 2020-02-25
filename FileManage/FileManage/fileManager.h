#pragma once
#include<string>
#include<unordered_set>
#include<unordered_map>
class FileManager
{
public:
	void scannerDir(const std::string& path);
	//所有的删除，保证一个文件不存在副本
	void deleteByname(const std::string& name);
	void deleteByMD5(const std::string& md5);
	void deleteAllCopy();
	//模糊删除：删除所有模糊匹配“matchName"所有文件的副本
	void deleteByMatchName(const std::string& matchName);
private:
	//vector  list  map  set
	std::unordered_set < std::string>_files;
	//md5-->file
	std::unordered_map<std::string,std::string>
	//file-->md5
	std::unordered_map<std::string,std::string>
};