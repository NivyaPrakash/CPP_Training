#include<iostream>
using namespace std;
int* allocmem(int*, int);
int getvalues(int*, int);
int sortAsc(int*, int);
void display(int*, int);
int main()
{
	int* ptr = nullptr;
	int n = 5;
	ptr = allocmem(ptr, n);
	getvalues(ptr, n);
	cout << "before" << endl;
	display(ptr, n);
	sortAsc(ptr, n);
	cout << "after" << endl;
	display(ptr, n);

}

int* allocmem(int* p, int noElem)
{
	p = (int*)malloc(noElem * sizeof(int));
	return p;
}


int getvalues(int* p, int n)
{
	for (int i = 0;i < n;i++, p++)
		cin >> *p;
	return 0;
}

int sortAsc(int* p, int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (p[i] > p[j])
				swap(p[i], p[j]);
		}
	}return 0;
}



int swap(int& x ,int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
	return 0;
}




void display(int* p,int n)
{
	int i = 0;
	while (i < n)
	{
		cout << *p++ << "\t";
		i++;
	}
}

