//#include<iostream>
//#include<Windows.h>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string word, sentence;
//	getline(cin, word);
//	getline(cin, sentence);
//	int i = 0, j = 0;
//	int count = 0, ret;
//	for (i = 0; i < sentence.size(); ++i)
//	{
//		for (j = 0; j < word.size(); ++j)
//		{
//			if (toupper(sentence[i + j]) != toupper(word[j]))
//				break;
//			if (i > 0 && sentence[i - 1] != ' ')
//				break;
//		}
//		if (j == word.size() && (sentence[i + j] == ' ' || j + i == sentence.size()))
//		{
//			count++;
//			if (1 == count)
//				ret = i;
//		}
//	}
//	if (count)
//		cout << count << " " << ret << endl;
//	else
//		cout << "-1" << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<Windows.h>
//using namespace std;
//int n, v[39], f[47][47], i, j, k, root[49][49];
//void print(int left, int right)
//{
//	if (left > right)
//		return;
//	if (left == right)
//	{
//		cout << left << " ";
//		return;
//	}
//	cout << root[left][right] << " ";
//	print(left, root[left][right] - 1);
//	print(root[left][right] + 1, right);
//}
//int main() {
//	cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> v[i];
//	}
//	for (i = 1; i <= n; i++)
//	{
//		f[i][i] = v[i];
//		f[i][i - 1] = 1;
//	}
//	for (i = n; i >= 1; i--)
//	{
//		for (j = i + 1; j <= n; j++)
//		{
//			for (k = i; k <= j; k++)
//			{
//				if (f[i][j] < (f[i][k - 1] * f[k + 1][j] + f[k][k]))
//				{
//					f[i][j] = f[i][k - 1] * f[k + 1][j] + f[k][k];
//					root[i][j] = k;
//				}
//			}
//		}
//	}
//	cout << f[1][n] << endl;
//	print(1, n);
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<Windows.h>
//using namespace std;
//
//typedef long long ll;
//vector<ll> v;
//ll n, m, ret = 0;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; ++i)
//	{
//		v.push_back(i);
//	}
//	for (int j = 1; j < (1 << n); ++j)
//	{
//		int count = 0;
//		ll t = m;
//		for (int a = 0; a < n; ++a)
//			if ((j >> a) & 1)
//			{
//				count++;
//				t /= v[a];
//			}
//		if (count & 1)
//			ret += t;
//		else
//			ret -= t;
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
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
//	return 0;
//}