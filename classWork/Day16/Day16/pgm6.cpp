#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int count = 0, j = 0, c1 = 0, k,l;
	char str[MAX];
	char str1[MAX] = {0};
	cout << "Enter string:";
	cin.getline(str, MAX);
	while (str[++count]);
	
	//for (int i = count-1;i >= 0;i--)
	for (int i =0;i <= count-1;i++)
	{
		while(str[i] != '\0')
			while (str[i] == ' ')
			{
				c1++;d
			}
			

		for (l = 0;l > c1-1;l++)
		{
			for (k = c1-1;k >= 0;k--)
			{
				str1[j++] = str[k];
			}
		}
			
	}str[j] = '\0';
	cout << str1;
}
