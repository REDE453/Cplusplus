#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//	string s1("12345");
//	cout<<atoi(s1.c_str())<<endl;
//	string s2("hello,world");
//	size_t pos=s2.find(',');
//	if (pos != string::npos)
//	{
//		cout << "�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	pos = s2.find("world");
//	if (pos != string::npos)
//	{
//		string s3=s2.substr(pos,5);
//		cout << s3 << endl;
//	}
//	else
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		//�ҵ����һ������
//		cout << str.substr(str.rfind(' ') + 1).size() << endl;
//	}
//	return 0;
//}
int main()
{
	string s;
	size_t sz = s.capacity();
	for (size_t i = 0; i < 200; ++i)
	{
		s.push_back('a');
		if (sz != s.capacity())
		{
			cout << sz << endl;
			sz = s.capacity();
		}
	}
	return 0;
}