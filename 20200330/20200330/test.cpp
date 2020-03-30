#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int hashtable[256] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i)
	{
		hashtable[str2[i]]++;
	}
	string ret;
	for (size_t i = 0; i < str1.size(); ++i)
	{
		if (0 == hashtable[str1[i]])
			ret += str1[i];
	}
	cout << ret << endl;
	system("pause");
	return 0;
}