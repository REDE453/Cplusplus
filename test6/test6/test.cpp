#include<iostream>
#include<Windows.h>
using namespace std;
bool Check(int n)
{
	int ret = 0;
	while (n)
	{
		ret = n % 10;
		if (0 == ret || 1 == ret || 2 == ret || 9 == ret)
			return true;
			n /= 10;
	}
	return false;
}
int SpecialNum(int n)
{
	int count = 0;
	for (int i = 0; i <= n; ++i)
	{
		if (Check(i))
		{
			count += i;
		}
	}
	return count;
}
void test()
{
	int n;
	while (cin >> n)
	cout << SpecialNum(n) << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}