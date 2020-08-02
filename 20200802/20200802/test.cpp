#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int count = 0, begin = 0;
	while ((begin = str1.find(str2, begin)) < str1.length())
	{
		count++;
		begin++;
	}
	cout << count << endl;
	system("pause");
	return 0;
}
//#include<iostream>
//#include<string>
//#include<stack>
//#include<Windows.h>
//using namespace std;
//int main()
//{
//	string str;
//	cin >> str;
//	stack<char> s;
//	for (int i = 0; i < str.size(); i++)
//	{
//		s.push(str[i]);
//	}
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << s.top();
//		s.pop();
//	}
//	system("pause");
//	return 0;
//}
