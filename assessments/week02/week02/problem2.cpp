#include<iostream>
using namespace std;
int main()
{
	int n,d,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0;
	cout << "Enter a no:" << endl;
	cin >> n;
	while (n > 0)
	{
		d = n % 10;//digits seperated
		
		 if (d == 1)//compare digit with 1,2,3...if it yes count will incremwnted(c1,c2..)
		{
			 c1++;
		}
	
		else if (d == 2)
		{
			 c2++;
		}
		else if (d == 3)
		{
			 c3++;
		}

		else if (d == 4)
		{
			 c4++;
		}
		else if (d == 5)
		{
			 c5++;
		}
		else if (d == 6)
		{
			 c6++;
		}
			
		else if (d == 7)
		{
			 c7++;
		}
			
		else if (d == 8)
		{
			 c8++;
		}
		else if (d == 9)
		{
			 c9++;
		}
		else if(d == 0)
		{
			 c10++;

		}

		n = n / 10;
		
		
	}
	cout << "0:" << c10<<endl;
	cout << "1:" << c1 << endl;
	cout << "2:" << c2 << endl;
	cout << "3:" << c3 << endl;
	cout << "4:" << c4 << endl;
	cout << "5:" << c5 << endl;
	cout << "6:" << c6 << endl;
	cout << "7:" << c7 << endl;
	cout << "8:" << c8 << endl;
	cout << "9:" << c9 << endl;
	return 0;

}