//Write a Program for Decimal to Hexadecimal Conversion
#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 100

char* decimalToHexadecimal(int num, char hexadecimal[]);

int main()
{
	char hexadecimal[MAX];
	int num;
	cin >> num;
	cout << decimalToHexadecimal(num, hexadecimal);
	return 0;
}

char* decimalToHexadecimal(int num, char hexadecimal[])
{
	int place = 0, i = 0, hexalphabets[] = { '0', '1','2','3','4','5','6','7','8','9', 'A','B', 'C', 'D', 'E', 'F' };
	while (num > 0)
	{
		hexadecimal[i++] = hexalphabets[(num % 16)];
		num /= 16;
	}
	hexadecimal[i] = '\0';
	reverse(hexadecimal, hexadecimal + i);
	return hexadecimal;
}