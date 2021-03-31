#include<iostream>
#include<map>
#include<string>
using namespace std;
//int main()
//{
//	map<string, string> m;
//	m.insert(pair<string, string>("peach", "桃子"));
//	m.insert(pair<string, string>("banana", "香蕉"));
//	m.insert(make_pair("apple", "苹果"));
//	cout << m.size() << endl;
//	cout << m["apple"] << endl;
//	cout << m["orange"] << endl;
//	//pair是一个类模板，里面有两个成员变量
//	//first：键值对中的key;
//	//second:键值对中的value;
//	for (auto e : m)
//	{
//		cout << "[" << e.first << ":" << e.second << "]";
//	}
//	cout << endl;
//	auto it = m.begin();
//	while (it != m.end())
//	{
//		cout << "[" << it->first << ":" << (*it).second << "]" << endl;
//		++it;
//	}
//	cout << endl;
//	//map中的key必须唯一
//	m.insert(make_pair("apple", "苹果"));
//	auto ret = m.find("orange");
//	if (ret != m.end())
//	{
//		cout << "[" << ret->first << ":" << ret->second << "]" << endl;
//	}
//	else
//	{
//		cout << "orange is not in map" << endl;
//	}
//	m.erase("orange");
//	ret = m.find("orange");
//	if (ret != m.end())
//	{
//		cout << "[" << ret->first << ":" << ret->second << "]" << endl;
//	}
//	else
//	{
//		cout << "orange is not in map" << endl;
//	}
//	//将map清空
//	m.clear();
//	return 0;
//}
//找出员工喜欢吃的前三种水果
#include<queue>
#include<vector>
//struct Com
//{
//	bool operator()(const pair<string, size_t>& left, const pair<string, size_t>& right)
//	{
//		return left.second < right.second;
//	}
//};
//int main()
//{
//	string fruits[] = { "apple", "orange", "peach", "apple", "apple", "watermelen", "orange","banana", "banana", "apple", "orange", "apple", "banana" };
//
//	// 1. 统计出每种水果出现的次数
//	map<string, size_t> m;
//	for (auto e : fruits)
//		m[e]++;
//
//	// 2. 找出员工喜欢吃的三种水果
//	priority_queue<pair<string, size_t>, vector<pair<string, size_t>>, Com> q;
//	for (auto e : m)
//		q.push(e);
//
//	vector<string> v;
//	for (size_t i = 0; i < 3; ++i)
//	{
//		v.push_back(q.top().first);
//		q.pop();
//	}
//	return 0;
//}
//int main()
//{
//	multimap<string, string> m;
//	m.insert(pair<string, string>("peach", "桃子"));
//	m.insert(pair<string, string>("banana", "香蕉"));
//	m.insert(make_pair("apple", "苹果"));
//	cout << m.size() << endl;
//	auto pos = m.find("apple");
//	if (pos != m.end())
//	{
//		cout << pos->second << endl;
//	}
//	else
//	{
//		cout << "apple is not in multimap" << endl;
//	}
//	//pair是一个类模板，里面有两个成员变量
//	//first：键值对中的key;
//	//second:键值对中的value;
//	for (auto e : m)
//	{
//		cout << "[" << e.first << ":" << e.second << "]";
//	}
//	cout << endl;
//	auto it = m.begin();
//	while (it != m.end())
//	{
//		cout << "[" << it->first << ":" << (*it).second << "]" << endl;
//		++it;
//	}
//	cout << endl;
//	//map中的key必须唯一
//	m.insert(make_pair("orange", "橙子"));
//	m.insert(make_pair("orange", "橘子"));
//	auto ret = m.find("orange");
//	if (ret != m.end())
//	{
//		cout << "[" << ret->first << ":" << ret->second << "]" << endl;
//	}
//	else
//	{
//		cout << "orange is not in map" << endl;
//	}
//	m.erase("orange");
//	ret = m.find("orange");
//	if (ret != m.end())
//	{
//		cout << "[" << ret->first << ":" << ret->second << "]" << endl;
//	}
//	else
//	{
//		cout << "orange is not in map" << endl;
//	}
//	//将map清空
//	m.clear();
//	return 0;
//}
//去重&&排序
#include<set>
//int main()
//{
//	int array[] = { 2,2,3,3,1,1,0,0,9,9,5,5,8,8,6,6,4,4,7,7 };
//	set<int> s;
//	for (auto e : array)
//	{
//		s.insert(e);
//	}
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}
//multiset:排序
#include<functional>
template<class T>
struct Greater
{
	bool operator()(const T& left, const T& right)
	{
		return left > right;
	}
};
int main()
{
	int array[] = { 2,2,3,3,1,1,0,0,9,9,5,5,8,8,6,6,4,4,7,7 };
	multiset<int,Greater<int>> s(array,array+sizeof(array)/sizeof(array[0]));
	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}