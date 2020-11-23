#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<Windows.h>
using namespace std;
//int main()
//{
//	string str1;
//	string str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	for (int i = 0; i < str1.size(); ++i)
//	{
//		for (int j = 0; j < str2.size(); ++j)
//		{
//			if (str1.at(i) == str2.at(j))
//			{
//				str1.erase(str1.begin() + i);
//			}
//		}
//	}
//	cout << str1 << endl;
//	system("pause");
//	return 0;
//}
int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0;
		vector<int>a;
		a.resize(3 * n);
		for (int i = 0; i < a.size(); ++i)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = n; i <= a.size() - 2; i += 2)
		{
			sum += a[i];
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}