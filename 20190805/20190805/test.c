#include<stdio.h>
#include<windows.h>
//int main()
//{
//	char str1[] = "welcome bit";
//	char str2[] = "***********";
//		int left, right;
//		str1[left] == str2[left];
//		str1[right] == str2[right];
//		if (left != right)
//		{
//			for(left=1,right=1;)
//		}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, e, f, n;
//	for (n = 0; n <= 999999 ;n++)
//	{
//		a = n / 100000;
//		b = n / 10000 - a * 10;
//		c = n / 1000 - a * 100 - b * 10;
//		d = n / 100 - a * 1000 - b * 100 - c * 10;
//		e = n / 10 - a * 10000 - b * 1000 - c * 100 - d * 10;
//		f = n % 10;
//		if (n == a + b + c + d + e + f)
//		{
//			printf("%d ", n);
//		}
//		else if(n==a*a+b*b+c*c+d*d+e*e+f*f)
//		{
//			printf("%d ", n);
//		}
//		else if(n==a*a*a+b*b*b+c*c*c+d*d*d+e*e*e+f*f*f)
//		{
//			printf("%d ", n);
//		}
//		else if (n ==  a*a*a*a +  b*b*b*b +  c*c*c*c + d*d*d*d + e*e*e*e + f*f*f*f) 
//		{
//			printf("%d ", n);
//		}
//		else if (n ==  a*a*a*a*a +  b*b*b*b*b +  c*c*c*c*c +  d*d*d*d*d +  e*e*e*e*e + f*f*f*f*f)
//		{
//			printf("%d ", n);
//		}
//			else if (n == a * a*a*a*a*a + b * b*b*b*b*b + c * c*c*c*c*c + d * d*d*d*d*d + e * e*e*e*e*e + f * f*f*f*f*f)
//			{
//				printf("%d ",n);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//	for (i = 0; i <= 6; i++)
//	{
//		for (j = 0; j <= 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <= 2*i ; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <= 10 - 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1, a = 2, sn=0, n,m=0;
//	printf("请输入n的值：");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		m = 10 * m + 2;
//		sn += m;
//	}
//	printf("%d\n", sn);
//	system("pause");
//	return 0;
//}
//int main()
//{
//  char str[10]= getchar();
//	if (str >= 'A'&&str <= 'Z')
//	{
//		str = str + 32;
//	}
//	else if (string >= 'a'&&string  <= 'z')
//	{
//		string = string - 32;
//	}
//	else if (string >= '0'&&string <= '9')
//	{
//		
//	}
//	printf("%c\n", string);
//	system("pause");
//	return 0;
//}
//int b(int i)
//{
//	int n=1;
//	for (n = 1; n <= i; n++)
//	{
//		if (i%n != 0)
//			printf("是素数");
//			return i;
//	}
//}
//int main()
//{
//	int a = 123;
//	b(a);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int YEAR(int n)
//	if ((n % 400 == 0) || (n % 4 == 0 && n ! 100 ))
//		printf("是闰年");
//}
//int main()
//{
//	int year = 1234;
//	system("pause");
//	return 0;
//}
//void fun1(unsigned int n)
//{
//	if (n > 9)
//	{
//		fun1(n / 10);
//	}
//	printf("%d\n", n%10);
//}
//int main()
//{
//	int m;
//	scanf_s("%d", &m);
//	fun1(m);
//	system("pause");
//	return 0;
//}
//int mystrlen(char *p)
//{
//	if (*p == '\0')
//		return 0;
//	else return 1 + mystrlen(p + 1);
//}
//int main()
//{
//	char *p = "hello";
//	printf("%d\n",mystrlen(p));
//	system("pause");
//	return 0;
//
//}
void temp(int x, int y);
{
	int t = 0;
	t = x;
	x = y;
	y = t;
}
int main()
{
	int a = 10, b = 20;
	temp(a, b);
	printf("%d%d\n", a, b);
	system("pause");
	return 0;
}