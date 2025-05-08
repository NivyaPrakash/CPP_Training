#include<iostream>
using namespace std;
int octDec(int);
int binDec(int);
void DecBin(int);
void DecOct(int);
int main()
{
	int n,ch,res=0,res1=0;
	
	//int res=octDec(n);
	//cout << res;
	//int res1 = binDec(n);
	//cout << res1;
	//DecBin(n);
	//DecOct(n);
	cout << "1. octal to Decimal"<<endl;
	cout << "2.Decimal to octal"<<endl;
	cout << "3.Binary to Decimal"<<endl;
	cout << "4.Decimal to binary"<<endl;


	cout << "Enter your choice:" << endl;
	cin >> ch;
	cout << "enter number:" << endl;
	cin >> n;
	int t = n;

	switch (ch)
	{
	case 1:
		 res = octDec(n);
		cout << res;
		break;
	case 2
	:DecOct(n);
		break;
	case 3:
		res1 = binDec(n);
		cout << res1;
	case 4:
		DecBin(n);
		break;
	default:
		cout << "invalid choice" << endl;
	}


}
	int octDec(int n)
	{
		int count = 0,sum=0;
		while (n)
		{
			int d = n % 10;
			n = n / 10;
			int p = d*pow(8,count);
			sum =sum+ p;
			
			count++;
			

		}
		return sum;
	}



	int binDec(int n)
	{
		int count = 0, sum = 0;
		while (n)
		{
			int d = n % 10;
			n = n / 10;
			int p = d * pow(2, count);
			sum = sum + p;

			count++;


		}
		return sum;
	}


	void DecBin(int n)
	{
		int i;
		int bin[100];
		for (i = 0;n > 0;i++)
		{
			bin[i] = n % 2;
			n = n / 2;
		}
		for(i=i - 1;i >= 0;i--)
		{
			cout << bin[i];
		}
	}




	void DecOct(int n)
	{
		int i;
		int bin[100];
		for (i = 0;n > 0;i++)
		{
			bin[i] = n % 8;
			n = n / 8;
		}
		for (i = i - 1;i >= 0;i--)
		{
			cout << bin[i];
		}
	}
