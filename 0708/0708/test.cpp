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
//		//累加month-1的天数
//		for (int i = 1; i < month; ++i)
//		{
//			n += monthDays[i];
//		}
//		//累加month那个月的天数
//		n += day;
//		//闰年+1
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
//	Solution s1;//s1的生命周期在main函数中
//	s1.Sum_Solution(10);
//	//Solution();//匿名对象生命周期就在这一行
//	Solution().Sum_Solution(10);//只有我这一行会使用这个
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