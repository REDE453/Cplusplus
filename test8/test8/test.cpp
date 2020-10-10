#include<iostream>
#include<cmath>
#include<algorithm>
#include<Windows.h>
using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}
const int num = 100000;
int Array1[num], Array2[num];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> Array1[i];
	}
	sort(Array1, Array1 + n);
	for (int i = 1; i < n; i++)
	{
		Array2[i] = Array1[i] - Array1[i - 1];
	}
	int ret = 0;
	for (int i = 1; i < n; i++)
	{
		ret = gcd(ret, Array2[i]);
	}
	if (!ret)
		cout << n << endl;
	else
		cout << (Array1[n - 1] - Array1[0]) / ret + 1 << endl;
	system("pause");
	return 0;
}
