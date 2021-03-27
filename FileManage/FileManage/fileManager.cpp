#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include "fileManager.h"
#include"fileutil.h"

//ɨ�������Ϣ
void FileManger::scannereDir(const std::string& path)
{
	//��������
	_files.clear();
	searchDir(path, _files);
	getMd5toFiles();
	getCopList();
}

void FileManger::getMd5toFiles()
{
	_md5toFiles.clear();
	for (const auto& f : _files)
	{
		//��ʼ��MD5��ʼֵ
		_md5.reset();
		_md5toFiles.insert(make_pair(_md5.getFileMD5(f.c_str()), f));
	}
}

//��ȡ�ظ����ļ�
void FileManger::getCopList()
{
	_filestoMD5.clear();
	auto it = _md5toFiles.begin();
	while (it != _md5toFiles.end())
	{
		//�鿴MD5��ͬ�ļ��ĸ����Ƿ����1
		if (_md5toFiles.count(it->first) > 1)
		{
			//����ÿһ��MD5��Ӧ�ļ��������ļ�����
			auto pairIt = _md5toFiles.equal_range(it->first);
			auto begin = pairIt.first;
			while (begin != pairIt.second)
			{
				//�����ظ��ļ���ӳ���ϵ
				_filestoMD5.insert(make_pair(begin->second, begin->first));
				++begin;
			}
			//�ƶ�����һ����ͬMD5���ļ���λ��
			it = pairIt.second;
		}
		else
		{
			_files.erase(it->second);
			it = _md5toFiles.erase(it);

		}
	}
}

//ɾ���ظ����ļ�����ͬ���ݵ��ļ�ֻ����һ��
void FileManger::deleteByName(const std::string& name)
{
	if (_filestoMD5.count(name) == 0)
	{
		std::cout << name << "not exist !" << std::endl;
		return;
	}
	std::string curMD5 = _filestoMD5[name];
	std::cout << name << "---->" << _md5toFiles.count(curMD5) << std::endl;
	auto pairIt = _md5toFiles.equal_range(curMD5);
	auto curIt = pairIt.first;
	int count = 0;
	while (curIt != pairIt.second)
	{
		if (curIt->second != name)
		{
			_files.erase(curIt->second);
			_filestoMD5.erase(curIt->second);
			deleteFile(curIt->second.c_str());
			++count;
		}
		++curIt;
	}
	curIt = pairIt.first;
	while (curIt != pairIt.second)
	{
		if (curIt->second != name)
		{
			_md5toFiles.erase(curIt);
			pairIt = _md5toFiles.equal_range(curMD5);
			curIt = pairIt.first;
		}
		++curIt;
	}
	std::cout << "delete files number: " << count << std::endl;
}

void FileManger::deleteByMD5(const std::string& md5)
{
	if (_md5toFiles.count(md5) == 0)
	{
		std::cout << md5 << "not exist !" << std::endl;
		return;
	}
	auto it = _md5toFiles.find(md5);
	deleteByName(it->second);
}


//�ظ����ļ�ֻ����һ��
void FileManger::deleteAllCopy()
{
	std::unordered_set<std::string> md5set;
	//�ҳ����е�MD5ֵ
	for (const auto& p : _md5toFiles)
	{
		md5set.insert(p.first);
	}
	for (const auto& md5 : md5set)
	{
		deleteByMD5(md5);
	}
}

//ģ��ɾ����ɾ�����������ַ����ļ����ظ����ļ�
void FileManger::deleteByMatchName(const std::string& MatchName)
{
	std::unordered_set<std::string> allFiles;
	//�������е��ļ�
	for (const auto& f : _files)
	{
		if (f.find(MatchName) != std::string::npos)
			allFiles.insert(f);
	}
	for (const auto& f : allFiles)
	{
		if (_filestoMD5.count(f) != 0)
		{
			deleteByName(f);
		}
	}
}

void FileManger::showCopyList()
{
	auto it = _md5toFiles.begin();
	int total = _md5toFiles.size();
	int count = 0;
	while (it != _md5toFiles.end())
	{
		int idx = 1;
		auto pairIt = _md5toFiles.equal_range(it->first);
		auto curIt = pairIt.first;
		std::cout << "cur MD5:" << it->first << std::endl;
		while (curIt != pairIt.second)
		{
			std::cout << "\t��" << idx << "���ļ�" << std::endl;
			std::cout << curIt->second << std::endl;
			count++;
			idx++;
			curIt++;
		}
		it = pairIt.second;
	}
	std::cout << "�ļ�����: " << total << "\t" << count << std::endl;
}
void FileManger::showAllFile()
{
	for (const auto& f : _files)
	{
		std::cout << f << std::endl;
	}
	std::cout << "file count: " << _files.size() << std::endl;
}