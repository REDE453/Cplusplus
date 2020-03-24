#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int a, b, c, d = 0;
	cin >> a >> b >> c;
	int i = 10;
	while (i)
	{
		if (i % 3 == a && i % 5 == b && i % 7 == c)
		{
			cout << i << endl;
			d += 1;
		}
		i++;
	}
	if (d == 0)
	{
		cout << "No Answer" << endl;
	}
	system("pause");
	return 0;
}
