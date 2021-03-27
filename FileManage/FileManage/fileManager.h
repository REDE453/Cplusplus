#pragma once
#include <string>
#include <unordered_map>
#include <unordered_set>
#include "md5.h"

class FileManger
{
public:
	//ɨ�������Ϣ
	void scannereDir(const std::string& path);
	//��ȡ�ظ����ļ�
	void getCopList();
	//��ȡ�ļ���MD5
	void getMd5toFiles();
	//ɾ���ظ����ļ�����ͬ���ݵ��ļ�ֻ����һ��
	void deleteByName(const std::string& name);
	void deleteByMD5(const std::string& md5);
	void deleteAllCopy();
	//ģ��ɾ����ɾ�����������ַ����ļ����ظ����ļ�
	void deleteByMatchName(const std::string& MatchName);
	//��ӡ
	void showCopyList();
	void showAllFile();
	void showMD5Map();
private:
	std::unordered_set<std::string> _files;
	//MD5���ļ���ӳ��
	std::unordered_multimap<std::string, std::string> _md5toFiles;
	//�ļ���MD5��ӳ��
	std::unordered_map<std::string, std::string> _filestoMD5;
	MD5 _md5;
};