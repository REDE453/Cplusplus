#include"fileManager.h"
#include"fileutil.hpp"
void FileManager::scannerDir(const std::string& path)
{
	//��������
	_files.clear();
	searchDir(path, _files);
	cout << "all file" << endl;
	showAllFile();
	getMd5files();
	showCopyList();
	getCopyList();
	cout << "copy list" << endl;
	showAllFile();
}
void FileManager::getMd5files()
{
	_md5toFiles.clear();
	for (const auto& f : _files)
	{
		//�������ļ�֮ǰ����
		_md5.reset();
		_md5toFiles.insert(make_pair(_md5.getFileMD5, f));
	}
}
//ֻ���������ظ��ļ��Ľ��
void FileManager::getCopyList()
{
	_filestoMd5.clear();
	//��Ҫ�÷�Χfor:�漰ɾ������
	auto it = _md5toFiles.begin();
	while (it != _md5toFiles.end())
	{
		//����ÿһ��md5��Ӧ�������ļ����
		if (_md5toFiles.count(it->first) > 1)
		{
			//equal_range ����ֵ��pair<beginIt,endIt>:(beginIt,endIt)--->����������ʱ����
			auto pairIt = _md5toFiles.equal_range(it->first);
			auto begin = pairIt.first;
			while (begin != pairIt.second)
			{
				//ֻ����ظ��ļ���ӳ���ϵ
				_filestoMd5.insert(make_pair(begin->second, begin->first));
				++begin;
			}
			//��һ����ͬ��md5ֵ����ʼλ��
			it = pairIt.second;
		}
		else {
			_files.erase(it->second);
			//erase����ֵ��ɾ��Ԫ�ص���һ��λ��
			it = _md5toFiles.erase(it);
		}
	}

}
//���е�ɾ������֤һ���ļ������ڸ���
void FileManager::deleteByname(const std::string& name)
{
	if (_filestoMd5.count(name) == 0)
	{
		cout << name << "not exist!" << endl;
		return;
	}
	string curMD5 = _filestoMd5[name];
	cout << name << "-->" << _md5toFiles.count(curMD5) << endl;
	auto pairIt = _md5toFiles.equal_range(curMD5);
	auto curIt = pairIt.first;
	int count = 0;
	while (curIt != pairIt.second)
	{
		if (curIt->second != name)
		{
			_files.erase(curIt->second);
			_filestoMd5.erase(curIt->second);
			deletefile(curIt->second.c_str);
		}
		++curIt;
	}
	curIt = pairIt.first;
	while (curIt != pairIt.second)
	{
		if (curIt->second != name)
		{
			//key-->md5
			_md5toFiles.erase(curIt);
			pairIt = _md5toFiles.equal_range(curMD5);
			curIt = pairIt.first;
		}
		++curIt;
	}
	cout << "delete files:" << count << endl;
}
void FileManager::deleteByMD5(const std::string& md5)
{
	//md5->files
	if (_md5toFiles.count(md5) == 0)
	{
		cout << md5 << "not exist" << endl;
		return;
	}
	//ɾ��ֻ����һ�ݣ�������һ��
	auto pairIt = _md5toFiles.equal_range(md5);
	cout << md5 << "--->" << _md5toFiles.count(md5) << endl;
	auto curIt = pairIt.first;
	++curIt;
	while (curIt != pairIt.second)
	{
		_files.erase(curIt->second);
		_filestoMd5.erase(curIt->second);
		//���ļ�����ɾ��
		deletefile(curIt->second.c_str());
		++curIt;
	}
	//����MD5->files
	curIt = pairIt.first;
	++curIt;
	//erase(first,last)-->ɾ������ֵ[first,last)
	_md5toFiles.erase(curIt, pairIt.second);
	std::cout << "delete files :" << count << endl;
}
void FileManager::deleteByMD5V2(const string& md5)
{
	//md5->files
	if (_md5toFiles.count(md5) == 0)
	{
		cout << md5 << "not exist" << endl;
		return;
	}
	auto it = _md5toFiles.find(md5);
	deleteByname(it->second);
}
//ÿ���ظ��ļ�ֻ����һ��
void FileManager::deleteAllCopy()
{
	unordered_set<std::string>md5Set;
	//�ҳ�����MD5ֵ
	for (const auto& p : _md5toFiles)
	{
		md5Set.insert(p.first);
	}
	for (const auto& md5 :: md5Set)
	{
		deleteByMD5(md5);
	}
}
//ģ��ɾ����ɾ������ģ��ƥ�䡰matchName"�����ļ��ĸ���
void FileManager::deleteByMatchName(const std::string& matchName)
{
	
}
void FileManager::showCopyList()
{
	auto it = _md5toFiles.begin();
	int total = _md5toFiles.size();
	int count = 0;
	while (it != _md5toFiles.end())
	{
		//md5ֵ��ͬ����ʾ��һ��
		int idx = 1;
		auto pairIt = _md5toFiles.equal_range(it->first);
		auto curIt = pairIt.first;
		cout << "cur MD5:" << it->first << endl;
		while (curIt != pairIt.second)
		{
			cout << "\t��" << idx << "���ļ���";
			cout << curIt->second << endl;
			count++;
		}
		it = pairIt.second;
	}
	cout << "�ļ�������" << total << "\t" << count << endl;
}
void FileManager::showAllFile()
{
	for (const auto& f : _files)
	{
		cout << f << endl;
	}
	cout << "file count:" << _files.size() << endl;
}
void showMd5Map()
{
	cout << endl;
}