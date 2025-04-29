#include<iostream>
using namespace std;

void printNum(int);
int main()
{
	int N;
	cout << "Enter the value of N:" << endl;
	cin >> N;
	printNum(N);
}
void printNum(int N)
{
	while (N <= 0)
	{
		
		return;
	}
	cout << N;
	printNum(N - 1);
	
}