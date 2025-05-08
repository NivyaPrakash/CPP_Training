#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int count = 0, i,sum=0;
	char str[MAX];

	cout << "Enter string:";
	cin.getline(str, MAX);
	/*for (i = 0;i < strlen(str);i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			sum += str[i] - 48;
		}
	}cout << sum;*/


	for (i = 0;i < strlen(str);i++)
	{
		if (isdigit(str[i]))
		{
			sum += str[i] - 48;
		}
	}cout << sum;
}