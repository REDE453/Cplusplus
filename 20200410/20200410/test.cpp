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
		// n����32�ξͱ�Ϊ0
		while (n)
		{
			//��ȡ��ǰλ�Ķ�����ֵ
			if (n & 1)
			{
				//���1��ֵ�����������ۼӣ����Ҹ���������
				++count;
				maxCount = max(count, maxCount);
			}
			else
			{
				//���1��ֵ�������������ۼ�
				count = 0;
			} 
				n = n >> 1;
		} 
		cout << maxCount << endl;
	} 
	system("pause");
	return 0;
}