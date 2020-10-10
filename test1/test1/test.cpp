//#include<iostream>
//#include<vector>
//#include<Windows.h>
//typedef long long ll;
//using namespace std;
//ll  m, res;
//int n;
//vector<ll> v;
//void dfs(ll a, int cur, int cnt)
//{
//	if (a > m)
//		return;
//	if (cnt & 1)
//		res += m / a;
//	else
//		res -= m / a;
//	for (int i = cur + 1; i < n; i++)
//	{
//		dfs(v[i] * a, i, cnt + 1);
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		v.push_back(i);
//	}
//	res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		dfs(v[i], i, 1);
//	}
//	cout << res << endl;
//	system("pause");
//	r#inc