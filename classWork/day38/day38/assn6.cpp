#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
	set<string> dict = { "apple", "application", "banana", "apply", "ball" };
	string s;
	getline(cin, s);
	auto itr = dict.lower_bound(s);
	while (itr != dict.end() && (*itr).substr(0, s.size()) == s)
	{
		cout << *itr << " ";
		advance(itr, 1);
	}
	cout << endl;
	return 0;
}