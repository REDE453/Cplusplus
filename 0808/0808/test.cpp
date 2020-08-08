#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;
//int mod(int a, int b, int p)
//{
//	int ret = 1 % p;
//	while (b)
//	{
//		if (b & 1)
//			ret = 1ll * ret*a%p;
//		a = 1ll * a*a%p;
//		b >>= 1;
//	}
//	return ret;
//}
//int main()
//{
//	int a, b, p, ret;
//	while (cin >> a >> b >> p)
//	{
//		ret = mod(a, b, p);
//		cout << ret;
//	}
//	system("pause");
//	return 0;
//}
int n;
vector<int> a;
while (cin >> n);
for (int i = 0; i < a.size(); ++i)
{
	cin >> a[i];
}
	void Print(int p,int q)
	{
		bool p1 = true, p2 = true;
		if (p == 0)
			return;
		if (p > 0 && p != n)
			cout << "+";
		if (p < 0)
			cout << "-";
		if (abs(p) == 1)
			p1 = false;
		if (1 == q)
			p2 = false;
		if (p1)
			cout << abs(p) << "x";
		if (p2)
			cout << q;
	}
int main()
{
	for (int i = 1; i <= n; ++i)
	{
		Print(a[i], n - i + 1);
		if()
	}
}
