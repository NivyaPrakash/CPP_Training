#include<iostream>
using namespace std;
#include<algorithm>
#define MAX 100
class arrayprint
{
private:
	int arr[MAX];
	int size;
public:
	void getArray()
	{
		
		cout << "Enter the size of array:" << endl;
		cin >> size;
		cout << "Enter the elements of array:" << endl;
		for (int i = 0;i < size;i++)
			cin >> arr[i];
	}

	int LargestArray()
	{
		int max = arr[0];
		for (int i = 0;i < size;i++)
		{
			if (arr[i] > max)
				max = arr[i];
		}
		return max;
	}


	void dessorting()
	{
		sort(arr, arr + size);
		for (int i = 0;i < size;i++)
		{
			cout << arr[i];
		}
	}

	
};

int main()
{
	arrayprint a;
	a.LargestArray();
	a.dessorting();
}

