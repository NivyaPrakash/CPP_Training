#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 100
class arrayprint
{
private:
	int arr[MAX];
	int size;
public:
	arrayprint(int a[], int s)
	{
		for (int i = 0;i < s;i++)
		{
			arr[i] = a[i];
			
		}
		size = s;
	}
	int largestArray()
	{
		int max = arr[0];
		for (int i = 0;i < size;i++)
		{
			if (arr[i] > max)
				max = arr[i];
		}
		return max;
	}


	void ascsorting()
	{
		sort(arr, arr + size);
		for (int i = 0;i < size;i++)
		{
			cout << arr[i];
		}cout << endl;
	}

	void dessorting()
	{
		for (int i = 0;i < size-1;i++)
		{
			for (int j = i + 1;j < size;j++)
			{
				if (arr[i] < arr[j])
				{
					arr[i] = arr[i] ^ arr[j];
					arr[j] = arr[i] ^ arr[j];
					arr[i] = arr[i] ^ arr[j];
				}
			}
		}
		for (int i = 0;i < size;i++)
		{
			cout << arr[i];
		}
	}


	


};



int main()
{
	int arr[MAX];
	int size;
	cout << "Enter the size of array:" << endl;
	cin >> size;
	cout << "Enter the elements of array:" << endl;
	for (int i = 0;i < size;i++)
		cin >> arr[i];
	arrayprint a(arr, size);
	int m=a.largestArray();
	cout << "Max element:" << m<<endl;
	a.ascsorting();
	a.dessorting();
	

}