#include<stdio.h>
//struct A
//{
//	int a;
//	int b;
//	int c;
//};
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	*pa = 100;
//	struct A aa;
//	struct A* paa = &aa;
//	paa->a;
//	printf("%d\n", sizeof(pa));
//	return 0;
//}
int main()
{
	int a = 10;
	int* p1=NULL;
	const int* p2=&a;
	int* const p3;
	int const* p4;
	const int* const p5;

	return 0;
}