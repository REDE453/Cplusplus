//#include <iostream>
//#include<Windows.h>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		int count = 0;
//		//���ȼ����������
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == ' ')
//				count++;
//			//�����˫���ţ���������ֱ����һ��˫���Ž���
//			if (str[i] == '"')
//			{
//				do
//				{
//					i++;
//				} while (str[i] != '"');
//			}
//		} 
//		//�Կո����������ո������Ȳ���������1
//			cout << count + 1 << endl;
//		//��flag��ʾ�Ƿ����˫���ţ�0��ʾ��˫����
//		//˫�����еĿո�Ҫ��ӡ����
//		//�����ı�flag��ֵ������˫���ſ���ʹflag��ԭ
//			int flag = 1; 
//			for (int i = 0; i < str.size(); i++)
//			{
//				//��˫���ţ�flagͨ������Ϊ0����һ��������˫���ţ�flag��Ϊ1
//				if (str[i] == '"')
//					flag ^= 1;
//				//˫���ź���ͨ�ո񲻴�ӡ
//				if (str[i] != ' ' && str[i] != '"')
//					cout << str[i];
//				//˫�����еĿո�Ҫ��ӡ
//				if (str[i] == ' ' && (!flag))
//					cout << str[i];
//				//����˫����֮��Ŀո�ͻ���
//				if (str[i] == ' ' && flag)
//					cout << endl;
//			} 
//			cout << endl;
//	}
//	system("pause");
//	return 0;
//}
#include <iostream>
#include<Windows.h>
#include <vector>
#include <algorithm>
using namespace std;
//����Լ���������1�ͱ����Լ��
void divisorNum(int n, vector<int> &divNum)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			divNum.push_back(i);
			//��ƽ����ʱ������һ����ҲҪ����
			if (n / i != i)
				divNum.push_back(n / i);
		}
	}
}
int Jump(int N, int M)
{
	//����ĵ����stepNum��Ĳ�������ʼNΪ1������N��NΪ1��
	vector<int> stepNum(M + 1, 0);
	stepNum[N] = 1;
	for (int i = N; i < M; i++)
	{
		//N������Լ������Ϊ�ӱ�������㿪ʼ���ߵ�����
		vector<int> divNum;
		//0��������㲻�ܵ�
		if (stepNum[i] == 0)
			continue;
		//����������ߵĲ���������divNum��������
		divisorNum(i, divNum);
		for (int j = 0; j < divNum.size(); j++)
		{
			//��λ��i�����ܵ���ĵ�Ϊ stepNum[divNum[j]+i]
			if ((divNum[j] + i) <= M && stepNum[divNum[j] + i] != 0)
				stepNum[divNum[j] + i] = min(stepNum[divNum[j] + i], stepNum[i] +
					1);
			else if ((divNum[j] + i) <= M)
				stepNum[divNum[j] + i] = stepNum[i] + 1;
		}
	}
	if(stepNum[M] == 0)
		return -1;
	else
//��ʼ��ʱ�����һ��������Ҫ��1
		return stepNum[M] - 1;
} 
int main()
{
	int n, m;
	cin >> n >> m;
	cout << Jump(n, m) << endl;
	system("pause");
	return 0;
}