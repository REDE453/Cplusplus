//#include<iostream>
//#include<string>
//#include<Windows.h>
//using namespace std;
//int main()
//{
//	string str1, str2, ret;
//	cin >> str1;
//	cin >> str2;
//	char str[256] = { 0 };
//	for (int i = 0; i < str2.size(); ++i)
//	{
//		str[str2[i]]++;
//	}
//	for (int i = 0; i < str1.size(); ++i)
//	{
//		if (str[str1[i]] == 0)
//			ret += str1[i];
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<windows.h>
#include<vector>
using namespace std;
void func()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int sum = 0;
	int max = v[0];
	for (int i = 0; i < n; ++i)
	{
		sum += v[i];
		if (sum > max)
		{
			max = sum;
		}
		else if (sum < 0)
		{
			sum = 0;
		}
	}
	cout << max<<endl;
}
int main()
{
	func();
	system("pause");
	return 0;
}