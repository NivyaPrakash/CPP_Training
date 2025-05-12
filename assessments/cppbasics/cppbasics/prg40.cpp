//Write a Program to Count the Sum of Numbers in a String
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char str[MAX];
	int sum = 0;
	cout << "Enter te string:" << endl;
	cin.getline(str, MAX);
	for (int i = 0;i < strlen(str);i++)
	{
		if (isdigit(str[i]))
		{
			sum += str[i] - '0';
		}
	}cout << sum;

}