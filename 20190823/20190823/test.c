#include<stdio.h>
#include<windows.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,4,3,2,1 };
//	int i = 0, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum ^= arr[i];
//	}
//	int n = -1;
//	for (i = 0; i < 32; i++)
//	{
//		if (sum >> i & 1)
//		{
//			n = i;
//			break;
//		}
//	}
//	int sum1 = 0, sum2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] >> n & 1)
//		{
//			sum1 ^= arr[i];
//		}
//		else {
//			sum2 ^= arr[i];
//		}
//	}
//	printf("%d %d\n", sum1, sum2);
//	system("pause");
//	return 0;
//}
int main()
{
	int n=20;
	int sum=0;
	int ex = 0;
	int i = 0;
	for (i = n;;i/= 2)
	{
		sum += i;
		i += ex;
		ex = i % 2;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}