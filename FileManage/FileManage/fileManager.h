#pragma once
#include<string>
#include<unordered_set>
#include<unordered_map>
class FileManager
{
public:
	void scannerDir(const std::string& path);
	//���е�ɾ������֤һ���ļ������ڸ���
	void deleteByname(const std::string& name);
	void deleteByMD5(const std::string& md5);
	void deleteAllCopy();
	//ģ��ɾ����ɾ������ģ��ƥ�䡰matchName"�����ļ��ĸ���
	void deleteByMatchName(const std::string& matchName);
private:
	//vector  list  map  set
	std::unordered_set < std::string>_files;
	//md5-->file
	std::unordered_map<std::string,std::string>
	//file-->md5
	std::unordered_map<std::string,std::string>
};