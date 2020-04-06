//#include<iostream>
//#include<vector>
//#include<Windows.h>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<string> v;
//	v.resize(n);
//	for (auto& str : v)
//		cin >> str;
//	bool lenSym = true, lexSym = true;
//	// 这里要注意从i=1开始遍历，前后比较，比较长度
//	for (size_t i = 1; i < v.size(); ++i)
//	{
//		if (v[i - 1].size() >= v[i].size())
//		{
//			lenSym = false;
//			break;
//		}
//	}
//	for (size_t i = 1; i < v.size(); ++i)
//	{
//		if (v[i - 1] >= v[i])
//		{
//			lexSym = false;
//			break;
//		}
//	}
//	if (lenSym&& lexSym)
//		cout << "both" << endl;
//	else if (!lenSym && lexSym)
//		cout << "lexicographically" << endl;
//	else if (lenSym && !lexSym)
//		cout << "lengths" << endl;
//	else if (!lenSym && !lexSym)
//		cout << "none" << endl;
//	system("pause");
//		return 0;
//}
#include<iostream>
#include<Windows.h>
using namespace std;
int gcd(int a, int b)
{
	int r;
	while (r = a % b) {
		a = b;
		b = r;
	}
	return b;
} 
int main()
{
	int a, b;
	while (cin >> a >> b) {
		cout << a * b / gcd(a, b) << endl;
	}
	system("pause");
	return 0;
}