//#include<iostream>
//#include<Windows.h>
//#include<string>
//using namespace std;
//int main()
//{
//	string str1, str2;
//	cin >> str2;
//	while (cin >> str1)
//	{
//		str2 = str1 + " " + str2;
//	}
//	cout << str2 << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>
#include<vector>
#include<Windows.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v;
	v.resize(n);
	for (int i = 1; i < n-1; ++i)
	{
		cin >> v[i];
	}
	int count = 1;
	for (int i = 1; i < n - 1; ++i)
	{
		if ((v[i - 1]<v[i] && v[i]>v[i + 1]) || (v[i - 1] > v[i] && v[i] < v[i + 1]))
			count++;
		if (i != n - 3)
			i++;
	}
	cout << count << endl;
	system("pause");
	return 0;
}