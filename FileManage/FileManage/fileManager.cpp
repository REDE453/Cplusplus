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
		_md5toFiles.insert(make_pair(_md5.getFileMD5(f), f));
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
			//erase����ֵ��ɾ��Ԫ�ص���һ��λ��
			it = _md5toFiles.erase(it);
			_files.erase(it->second);
		}
	}

}
//���е�ɾ������֤һ���ļ������ڸ���
void FileManager::deleteByname(const std::string& name)
{

}
void FileManager::deleteByMD5(const std::string& md5)
{

}
void FileManager::deleteAllCopy()
{

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

}