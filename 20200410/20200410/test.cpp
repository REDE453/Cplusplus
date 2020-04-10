#include<iostream>
#include<string>
#include<Windows.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0, maxCount = 0;
		// n右移32次就变为0
		while (n)
		{
			//获取当前位的二进制值
			if (n & 1)
			{
				//如果1的值连续，计数累加，并且跟新最大计数
				++count;
				maxCount = max(count, maxCount);
			}
			else
			{
				//如果1的值不连续，重新累加
				count = 0;
			} 
				n = n >> 1;
		} 
		cout << maxCount << endl;
	} 
	system("pause");
	return 0;
}