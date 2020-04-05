#include <iostream>
#include<Windows.h>
using namespace std;
int main() {
	int N, f, l = 0, r = 0, f0 = 0, f1 = 1;
	cin >> N;
	while (1) {
		f = f0 + f1;
		f0 = f1;
		f1 = f;
		//找到比N小且距离N最近的数，求出距离
		if (f < N)
			l = N - f;
		else
		{
			//找到比N大且距离N最近的数，求出距离
			r = f - N;
			break;
		}
	}
	//取最小距离
	cout << min(l, r) << endl;
	system("pause");
	return 0;
}
//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		// write code here
//		stack<char> sc;
//		for (auto ele : A) {
//			switch (ele) {
//			case '(':
//				sc.push(ele);
//				break;
//			case ')':
//			{
//				if (sc.empty() || sc.top() != '(')
//					return false;
//				else
//					sc.pop();
//			} 
//			break;
//			default:
//				return false;
//			}
//		} 
//			return true;
//	}
//};