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
		// 求出当前节点所属的深度层并加入当前深度层节点的权值和中 
		temp[getDeep(i)] += t;
	}
	int res = 0x80000000, resDeep;
	// 节点权值和最大的深度层 
	for (int i = 1; i <= MAX_DEEP; i++) {
		if (temp[i] > res) {
			res = temp[i];
			resDeep = i;
		}
	}
	cout << resDeep << endl;
	return 0;
}