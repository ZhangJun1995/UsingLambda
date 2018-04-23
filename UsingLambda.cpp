/*****************************
*Name:  Lambda���ʽӦ��
*Author: Zhang Jun
*Date: 2018/04/23
*****************************/

#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;
//����ڵ��ڸ������ȵĵ����ж��٣������ 
void biggies(vector<string> vi, string::size_type sz) {
	stable_sort(vi.begin(), 
				vi.end(), 
				[](const string &s1, const string &s2) { return s1.size() < s2.size(); });
	auto fw = find_if(vi.begin(), 
					  vi.end(), 
					  [sz](const string &cs) {return cs.size() >= sz; });
	for (auto c = fw; c != vi.end(); ++c) {
		cout << *c << " ";
	}
}

int main()
{
	vector<string> v;
	string s;
	while (cin >> s) {
		v.push_back(s);
	}
	biggies(v, 3);

	system("pause");
	return 0;
}
