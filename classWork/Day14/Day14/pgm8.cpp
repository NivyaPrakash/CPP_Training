#include<iostream>
using namespace std;
int main()
{
	int count = -1;
	char str[20];
	cout << "Enter string:";
	cin.getline(str, 20);
	/*
	for (int i = 0;i < 10;i++)
	{
		if (str[i] == '\0')
		{
			count++;
		}
	}*/
	while (str[++count]);
	
	cout<<count;

}