#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string str, name;
	while (getline(cin, str))
	{
		getline(cin, name);
		//�������ѳ����б�ָ�
		vector<string>v;
		for (size_t i = 0; i < str.size(); i++)
		{
			if (str[i] == '\"') {//���������ŵĲ���
				v.push_back(str.substr(i + 1, str.find('\"', i + 1) - i - 1));
				i = str.find('\"', i + 1) + 1;
			}
			else {//��������Ų���
				if (str.find(',', i) == str.npos) {
					v.push_back(str.substr(i, str.size() - i));
					i = str.size();
				}
				else {//û������
					v.push_back(str.substr(i, str.find(',', i) - i));
					i = str.find(',', i);
				}
			}
		}
		cout << ((find(v.begin(), v.end(), name) != v.end()) ? "Ignore" : "Important!") << endl;
	}
	return 0;
}