#include"fileManager.h"
#include"fileutil.hpp"
void FileManager::scannerDir(const std::string& path)
{
	//清理容器
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
		//计算新文件之前重置
		_md5.reset();
		_md5toFiles.insert(make_pair(_md5.getFileMD5, f));
	}
}
//只保留内容重复文件的结果
void FileManager::getCopyList()
{
	_filestoMd5.clear();
	//不要用范围for:涉及删除操作
	auto it = _md5toFiles.begin();
	while (it != _md5toFiles.end())
	{
		//查找每一个md5对应的所有文件结果
		if (_md5toFiles.count(it->first) > 1)
		{
			//equal_range 返回值：pair<beginIt,endIt>:(beginIt,endIt)--->迭代器遍历时连续
			auto pairIt = _md5toFiles.equal_range(it->first);
			auto begin = pairIt.first;
			while (begin != pairIt.second)
			{
				//只存放重复文件的映射关系
				_filestoMd5.insert(make_pair(begin->second, begin->first));
				++begin;
			}
			//下一个不同的md5值的起始位置
			it = pairIt.second;
		}
		else {
			_files.erase(it->second);
			//erase返回值被删除元素的下一个位置
			it = _md5toFiles.erase(it);
		}
	}

}
//所有的删除，保证一个文件不存在副本
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
	//删除只保留一份，保留第一份
	auto pairIt = _md5toFiles.equal_range(md5);
	cout << md5 << "--->" << _md5toFiles.count(md5) << endl;
	auto curIt = pairIt.first;
	++curIt;
	while (curIt != pairIt.second)
	{
		_files.erase(curIt->second);
		_filestoMd5.erase(curIt->second);
		//从文件磁盘删除
		deletefile(curIt->second.c_str());
		++curIt;
	}
	//更新MD5->files
	curIt = pairIt.first;
	++curIt;
	//erase(first,last)-->删除区间值[first,last)
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
//每个重复文件只保留一个
void FileManager::deleteAllCopy()
{
	unordered_set<std::string>md5Set;
	//找出所以MD5值
	for (const auto& p : _md5toFiles)
	{
		md5Set.insert(p.first);
	}
	for (const auto& md5 :: md5Set)
	{
		deleteByMD5(md5);
	}
}
//模糊删除：删除所有模糊匹配“matchName"所有文件的副本
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
		//md5值相同的显示在一起
		int idx = 1;
		auto pairIt = _md5toFiles.equal_range(it->first);
		auto curIt = pairIt.first;
		cout << "cur MD5:" << it->first << endl;
		while (curIt != pairIt.second)
		{
			cout << "\t第" << idx << "个文件；";
			cout << curIt->second << endl;
			count++;
		}
		it = pairIt.second;
	}
	cout << "文件总数：" << total << "\t" << count << endl;
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