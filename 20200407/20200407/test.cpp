//class UnusualAdd {
//public:
//	int addAB(int A, int B) {
//		int sum = 0, carry = 0;
//		while (B != 0) {
//			//��Ӧλ�ĺ�
//			sum = A ^ B;
//			//��Ӧλ�͵Ľ�λ����Ȼ�ǽ�λ����Ҫ��������һλ
//			carry = (A&B) << 1;
//			A = sum;
//			B = carry;
//		} 
//		return sum;
//	}
//};
#include<iostream>
#include<Windows.h>
using namespace std;
int pathNum(int n, int m)
{
	if (n > 1 && m > 1)
		//b������ݹ�
		return pathNum(n - 1, m) + pathNum(n, m - 1);
	else if (((n >= 1) && (m == 1)) || ((n == 1) && (m >= 1)))
		// a�������ֹ����
		return n + m;
	else
		//����Ϊ0ʱ�� ·��Ϊ0
		return 0;
} 
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << pathNum(n, m) << endl;
	}
	system("pause");
	return 0;
}