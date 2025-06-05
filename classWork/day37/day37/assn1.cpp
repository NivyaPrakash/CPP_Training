#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
template <typename T>
int godNumber(const T& s)
{
	int freq[10] = { 0 };
	for (auto ch : s)
	{
		if (ch >= '0' && ch <= '9')
		{
			freq[ch - '0']++;
		}
	}
	int maxno = 0;
	int minno = 0;
	for (int i = 0;i <= 9;i++)
	{
		if (freq[i] > 0)
		{
			int value = i * freq[i];
			maxno = max(maxno, value);
			minno = min(minno, value);
		}
	}
	if (maxno == minno)
	{
		return maxno;
	}
	return maxno - minno;
}


int main()
{
	string s;
	cin >> s;
	cout << godNumber(s) << endl;
	vector<char>chars(s.begin(), s.end());
	cout << "God number:" << godNumber(chars) << endl;
	return 0;
}