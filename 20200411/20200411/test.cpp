#include<iostream>
#include<Windows.h>
#include<algorithm>
using namespace std;
//�ж�����
bool isPrime(int num)
{
	int tmp = sqrt(num);
	//ֻ�����������������ܱ�������ߵ�����������һ�����ܱ������ұߵ�������
		for (int i = 2; i <= tmp; i++)
		{
			if (num %i == 0)
				return false;
		}
		return true;
}
int main()
{
	int num;
	int half;
	int i;
	while (cin >> num)
	{
		half = num / 2;
		//���м���������
		for (i = half; i > 0; i--)
		{
			if (isPrime(i) && isPrime(num - i))
				break;
		} 
		cout << i << endl << num - i << endl;
	} 
	system("pause");
	return 0;
}