#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int count = 0, i, sum = 0,l=0,r=0,temp=0;
	char str[MAX];

	cout << "Enter string:";
	cin.getline(str, MAX);
	for (i = 0;i < str[i] != '\0';i++)
	{
		if (str[i] == ' ')
		{
			r = i - 1;
			while (l < r)
			{
				temp = str[l];
				str[l] = str[r];
				str[r] = temp;
				l++;
				r--;
			}
			l = i + 1;
		}
	}
	r = i - 1;
	while (l < r)
	{
		temp = str[l];
		str[l] = str[r];
		str[r] = temp;
		l++;
		r--;
	}

	cout << str;
}
