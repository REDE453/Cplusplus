#include<iostream>
#include<vector>
#include<Windows.h>
using namespace std;

int TreeDepth(int n)
{
	int ret = 0;
	while (n>0)
	{
		n /= 2;
		ret++;
	}
	return ret;
}
int CompleteBinaryTree(int n)
{

}
void test()
{
	int n;
	cin >> n;
	vector<int> Array;
	for (int i = 0; i <=n ;++i)
	{
		Array.push_back[i];
	}
}
int main()
{
	system("pause");
	return 0;
}
int main() {
	int n, t;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &t);
		// �����ǰ�ڵ���������Ȳ㲢���뵱ǰ��Ȳ�ڵ��Ȩֵ���� 
		temp[getDeep(i)] += t;
	}
	int res = 0x80000000, resDeep;
	// �ڵ�Ȩֵ��������Ȳ� 
	for (int i = 1; i <= MAX_DEEP; i++) {
		if (temp[i] > res) {
			res = temp[i];
			resDeep = i;
		}
	}
	cout << resDeep << endl;
	return 0;
}