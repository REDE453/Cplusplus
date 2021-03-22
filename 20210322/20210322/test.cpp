#include<iostream>
using namespace std;

//class A
//{
//public:
//	int _a;
//	void f()
//	{
//		cout << "f()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	int _b;
//};
//class C : public A
//{
//public:
//	int _c;
//};
//class D : public B, public C
//{
//public:
//	int _d;
//};
//int main()
//{
//	cout << sizeof(D) << endl;
//	D d;
//	//d._a = 10;
//	//d.f();
//	d.B::_a = 1;
//	d._b = 2;
//	d.C::_a = 3;
//	d._c = 4;
//	d._d = 5;
//	d.B::f();
//	d.C::f();
//}
class A
	{
	public:
		int _a;
	};
	class B : virtual public A
	{
	public:
		int _b;
	};
	int main()
	{
		cout << sizeof(B) << endl;
		B b;
		b._a = 1;
		b._b = 2;
		return 0;
	}