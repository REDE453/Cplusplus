//#include<iostream>
//using namespace std;
//int main()
//{
//	char arry[5] = { 'C','h','i','n','a' };
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%c", arry[i] + 4);
//	}
//	cout << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	double n, m;
//	cin >> n;
//	m = 5.0 * (n - 32.0) / 9.0;
//	printf("%.2lf\n", m);
//	return 0;
//}
//有一个函数
//y = { x      x < 1
//	| 2x - 1   1 <= x < 10
//	{ 3x - 11  x >= 10
//
//写一段程序，输入x，输出y
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, y;
//	cin >> x;
//	if (x < 1)
//	{
//		y = x;
//		cout << y << endl;
//	}
//	else if (1 <= x &&x< 10)
//	{
//		y = 2 * x - 1;
//		cout << y << endl;
//	}
//	else if (x >= 10)
//	{
//		y = 3 * x - 11;
//		cout << y << endl;
//	}
//	else
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int  main()
//{
//	int x;
//	cin >> x;
//	if (x < 60)
//	{
//		cout << "E" << endl;
//	}
//	else if (x >= 60 && x < 69)
//	{
//		cout << "D" << endl;
//	}
//	else if (x >= 70 && x <= 79)
//	{
//		cout << "C" << endl;
//	}
//	else if (x >= 80 && x <= 89)
//	{
//		cout << "B" << endl;
//	}
//	else if (x >= 90)
//	{
//		cout << "A" << endl;
//	}
//	else
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, i;
//	a = 6;
//	for (i = 1; i <= 3; ++i)
//	{
//		printf("%d", a);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define I 20
//#define R 340
//#include <string.h>
//int main()
//{
//	char answer[10];
//	printf("遇到你\n我才发现\n曾经所有的条件\n似乎都成了我等你的借口\n\n");
//	printf("我对你的感情已经决堤\n所以\n请允许我，从今往后映入你\n明媚的眼\n");
//	printf("我\n想和你\n耳鬓厮磨，相濡以沫！");
//	printf("答应我吧！\n输入yes,你可以看到我的真心\n");
//	scanf_s("%s", answer);
//	char b[4] = "yes";
//	if (strcmp(answer, b) == 0)
//	{
//		float y, x, z, f;
//		for (y = 1.5f; y > -1.5f; y -= 0.1f)
//		{
//			for (x = -1.5f; x < 1.5f; x += 0.05f)
//			{
//				z = x * x + y * y - 1;
//				f = z * z*z - x * x*y*y*y;
//				putchar(f <= 0.0f ? "*********"[(int)(f*-8.0f)] : ' ');
//			}
//			putchar('\n');
//		}
//		long time;
//		for (;;)
//		{
//			system("color a");
//			for (time = 0; time < 99999999; time++);
//			system("color b");
//			for (time = 0; time < 99999999; time++);
//			system("color c");
//			for (time = 0; time < 99999999; time++);
//			system("color d");
//			for (time = 0; time < 99999999; time++);
//			system("color e");
//			for (time = 0; time < 99999999; time++);
//			system("color f");
//			for (time = 0; time < 99999999; time++);
//			system("color 0");
//			for (time = 0; time < 99999999; time++);
//			system("color 1");
//			for (time = 0; time < 99999999; time++);
//			system("color 2");
//			for (time = 0; time < 99999999; time++);
//			system("color 3");
//			for (time = 0; time < 99999999; time++);
//			system("color 4");
//			for (time = 0; time < 99999999; time++);
//			system("color 5");
//			for (time = 0; time < 99999999; time++);
//			system("color 6");
//			for (time = 0; time < 99999999; time++);
//			system("color 7");
//			for (time = 0; time < 99999999; time++);
//			system("color 8");
//			for (time = 0; time < 99999999; time++);
//			system("color 9");
//		}
//		getchar();
//
//	}
//	else
//	{
//		printf("\n好吧，那就相忘于江湖吧！\n");
//	}
//	return 0;
//}
//# include <stdio.h>
//# include <math.h>
//
//
//# define U 0.06
//# define V 0.025
//
//
//# define M 1.1
//# define N 1.2
//
//
//int main(void)
//{
//	float x, y;
//	float m, n;
//
//
//	for (y = 2; y >= -2; y -= U)
//	{
//		for (x = -1.2; x <= 1.2; x += V)
//		{
//			if ((((x*x + y * y - 1)*(x*x + y * y - 1)*(x*x + y * y - 1) - x * x*y*y*y) <= 0))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	getchar();
//
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string str;
//	getline(cin, str);
//	reverse(str.begin(), str.end());
//	cout << str;
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int BigandSmall(string s, string ss)
{
	int flag;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] - ss[i] == 32 || s[i] - ss[i] == -32 || s[i] - ss[i] == 0)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	string s, ss;
	cin >> s >> ss;
	if (s.length() != ss.length())
	{
		cout << "1" << endl;
	}
	else
	{
		if (s.compare(ss))
		{
			cout << "2" << endl;
		}
		else if (BigandSmall(s, ss))
		{
			cout << "3" << endl;
		}
		else
			cout << "4" << endl;
	}
	return 0;
}