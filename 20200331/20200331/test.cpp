//#include<iostream>
//#include<string>
//#include<Windows.h>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string str;
//	getline(cin, str);
//	reverse(str.begin(), str.end());
//	auto start = str.begin();
//	while (start != str.end())
//	{
//		auto end = start;
//		while (end != str.end() && *end != ' ')
//			end++;
//		reverse(start, end);
//		if (end != str.end())
//			start = end + 1;
//		else
//			start = end;
//	}
//	cout << str << endl;
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
	vector<int> a;
	a.resize(n + 1);
	a[n] = 0;
	int i = 0;
	for (i = 0; i < n; ++i)
		cin >> a[i];
	i = 0;
	int count = 0;
	while (i < n)
	{
		if (a[i] < a[i + 1])
		{
			while (i < n && a[i] <= a[i + 1])
				i++;
			count++;
			i++;
		}
		else if (a[i] == a[i + 1])
		{
			i++;
		}
		else
		{
			while (i < n && a[i] >= a[i + 1])
				i++;
			count++;
			i++;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}