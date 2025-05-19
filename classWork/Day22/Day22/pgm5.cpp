#include<iostream>
using namespace std;
void revArr(int*, int);
void display(int*,int);

int main()
{


	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	revArr(list, cap);
	display(list, cap);
	
}


void revArr(int* ptr, int n)
{
	/*
	for (int i = 0;i <n/2;i++)
	{
		ptr[i] = ptr[i] ^ ptr[n - i - 1];
		ptr[n-i-1] = ptr[i] ^ ptr[n - i - 1];
		ptr[i] = ptr[i] ^ ptr[n - i - 1];
	}
	*/


	
	int* start = nullptr;
	int* end = nullptr;
	start = ptr;
	end = ptr + (n - 1);
	while (start < end)
	{
		*start = *start ^ *end;
		*end = *start ^ *end;
		*start = *start ^ *end;
		*start++;
		*end--;

	}
}


void display(int* ptr, int n)
{
	for (int i = 0; i < n; i++) {
		cout << ptr[i] << endl;
	}
}