#include<iostream>
#include<Windows.h>
using namespace std;
//int main()
//{
//	static int monthDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year, month, day;
//	while (cin >> year >> month >> day)
//	{
//		int n = 0;
//		//�ۼ�month-1������
//		for (int i = 1; i < month; ++i)
//		{
//			n += monthDays[i];
//		}
//		//�ۼ�month�Ǹ��µ�����
//		n += day;
//		//����+1
//		if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//		{
//			n += 1;
//		}
//		cout << n << endl;
//	}
//	return 0;
//}
//class Solution
//{
//public:
//	Solution()
//	{
//		cout << "Solution()" << endl;
//	}
//	int Sum_Solution(int n)
//	{
//		cout <<" Solution()" << endl;
//		return n;
//	}
//	~Solution()
//	{
//		cout << "~Solution()" << endl;
//	}
//private:
//
//};
//int main()
//{
//	Solution s1;//s1������������main������
//	s1.Sum_Solution(10);
//	//Solution();//���������������ھ�����һ��
//	Solution().Sum_Solution(10);//ֻ������һ�л�ʹ�����
//	system("pause");
//	return 0;
//}
class A
{
public:
	A()
	{
		cout << "A()" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
};
class B
{
public:
	B()
	{
		cout << "B()" << endl;
	}
	~B()
	{
		cout << "~B()" << endl;
	}
};
class C
{
public:
	C()
	{
		cout << "C()" << endl;
	}
	~C()
	{
		cout << "~C()" << endl;
	}
}; 
class D
{
public:
	D()
	{
		cout << "D()" << endl;
	}
	~D()
	{
		cout << "~D()" << endl;
	}
};
C c;
int main()
{
	A a;
	B b;
	static D d;
	system("pause");
	return 0;
}
//C A B D
//~B  ~A  ~D  ~C