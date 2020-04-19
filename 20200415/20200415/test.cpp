//#include<iostream>
//using namespace std;
//int Leapyear(int year)
//{
//	if()
//}
//int main()
//{
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int Fibonacci(int n)
//{
//	if (1 == n || 2 == n)
//	{
//		return n;
//	}
//	else
//		return Fibonacci(n - 1)%1000000 + Fibonacci(n - 2)%1000000;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//		cout << Fibonacci(n) << endl;
//	return 0;
//}
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	for (int i = 2; i < 100000; i++)
	{
		v.push_back(0);
		v[i] = (v[i - 1] + v[i - 2]) % 1000000;
	}
	int n = 0;
	while (cin >> n)
	{
		if (n < 31)
			cout << v[n - 1] << endl;
		else
			cout << setw(6) << setfill('0') << v[n - 1] << endl;
	}
	return 0;
	}