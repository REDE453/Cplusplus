#pragma once
#include"Md5.h"
#include<string>
#include<unordered_set>
#include<unordered_map>
class FileManager
{
public:
	void scannerDir(const std::string& path);
	void getMd5files();
	void getCopyList();
	//���е�ɾ������֤һ���ļ������ڸ���
	void deleteByname(const std::string& name);
	void deleteByMD5(const std::string& md5);
	void deleteByMD5V2(const string& md5);
	void deleteAllCopy();
	//ģ��ɾ����ɾ������ģ��ƥ�䡰matchName"�����ļ��ĸ���
	void deleteByMatchName(const std::string& matchName);
	void showCopyList(); 
	void showAllFile();
	void showMd5Map();
private:
	//vector  list  map  set
	std::unordered_set < std::string>_files;
	//md5-->file
	std::unordered_map<std::string, std::string>_md5toFiles;
	//file-->md5
	std::unordered_map<std::string, std::string>_filestoMd5;
	MD5 _md5;
};