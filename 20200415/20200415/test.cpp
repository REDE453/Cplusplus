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
#include<iostream>
using namespace std;
int Fibonacci(int n)
{
	if (1 == n || 2 == n)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
	int n;
	while (cin >> n)
	{
		int i;
		for (  i = 1; i < n; ++i)
		{
			cout << Fibonacci(i);
		}
		cout << Fibonacci(i) << endl;
	}
	return 0;
}