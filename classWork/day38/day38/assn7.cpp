#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<string> stockPrices;
	string s = "";
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("ADD ") != string::npos)
			stockPrices.insert(s.substr(4));
		else if (s.find("REMOVE ") != string::npos)
		{
			stockPrices.erase(s.substr(7));
			cout << s.substr(7) << " removed" << endl;
		}
		else if (s == "MINMAX")
		{
			auto i = stockPrices.begin();
			cout << *(i) << " ";
			for (int j = 0; j < stockPrices.size() - 1; ++j)
				advance(i, 1);
			cout << *(i) << endl;
		}
	}
}