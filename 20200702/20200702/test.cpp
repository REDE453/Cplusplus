#include<iostream>
#include<Windows.h>
using namespace std;
//class Date
//{
//public:
//	//Date(int year = 0, int month = 1, int day = 1)
//	//{
//	//�������ڸ�ֵ
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	Date(int year = 0, int month=1, int day=1)
//		//��ʼ���б�
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1 = (1);//����
//	Date d2 = 2;//��ʽ���͵�ת���������tmp(2)+����tmp���������(tmp)+�Ż���ֱ�ӹ���
//	Date d3 = d1;//��������
//	Date d4{ 1,2,4 };  //��ʽ����ת��c++11֧��
//	int i = 1;
//	const double d = i;//��ʽ����ת�����������ʱ����
//	system("pause");
//	return 0;
//}
//static��Ա
//��Ƴ�һ����A�ܹ��������ٸ�����
class A
{
public:
	A()
	{
		++n;
	}
	A(const A& a)
	{
		++n;
	}
	static int Get()   //û��thisָ�룬�����в��ܷ��ʷǾ�̬��Ա
	{
		return n;
	}
private:
	static int n;//���� ��������ĳ������������������ж������������
	//n���ڶ������ھ�̬��
};
int A::n = 0;
A& f1(A& a)
{
	return a;
}
int main()
{
	A a1;
	A a2;
	f1(a1);
	//n = 1;//˭�����Զ�n�����޸�
	f1(a2);
	cout << a1.Get() << endl;
	cout << a2.Get() << endl;
	cout << A::Get() << endl;
	system("pause");
	return 0;
}