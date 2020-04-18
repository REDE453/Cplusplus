#include<iostream>
using namespace std;
int main()
{
	long a[91] = { 1,2 }
	for (int i = 2; i <= 90; ++i)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	int n;
	while (cin >> n)
		cout << a[n - 1] << endl;
	return 0;
}