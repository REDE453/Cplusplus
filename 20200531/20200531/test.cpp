#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
	int n;
	while (scanf_s("%d", &n) != EOF) {
		priority_queue<int, vector<int>, greater<int>> Q;
		int tmp;
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &tmp);
			Q.push(tmp);
		}
		int k;
		scanf_s("%d", &k);
		tmp = Q.top();
		Q.pop();
		for (int i = 2; i <= k; i++) {
			while (tmp == Q.top())
				Q.pop();
			tmp = Q.top();
			Q.pop();
		}
		printf("%d\n", tmp);
	}
}