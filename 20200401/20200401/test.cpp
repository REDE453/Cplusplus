//#include<iostream>
//#include<Windows.h>
//#include<string>
//using namespace std;
//int main()
//{
//	string str, res, cur;
//	cin >> str;
//	for (int i = 0; i <= str.length(); i++)
//	{
//		// 数字+=到cur
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			cur += str[i];
//		}
//		else
//		{
//			// 找出更长的字符串，则更新字符串
//			if (res.size() < cur.size())
//				res = cur;
//			else
//				cur.clear();
//		}
//	}
//	cout << res;
//	system("pause");
//	return 0;
//}
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		if (numbers.empty()) return 0;
		// 遍历每个元素，并记录次数；若与前一个元素相同，则次数加1，否则次数减1
		int result = numbers[0];
		int times = 1; // 次数
		for (int i = 1; i < numbers.size(); ++i)
		{
			if (times == 0)
			{
				// 更新result的值为当前元素，并置次数为1
				result = numbers[i];
				比特科技制作times = 1;
			}
			else if (numbers[i] == result)
			{
				++times; // 相同则加1
			}
			else
			{
				--times; // 不同则减1
			}
		}
		// 判断result是否符合条件，即出现次数大于数组长度的一半
		times = 0;
		for (int i = 0; i < numbers.size(); ++i)
		{
			if (numbers[i] == result) ++times;
		}
		return (times > numbers.size() / 2) ? result : 0;
	}
};