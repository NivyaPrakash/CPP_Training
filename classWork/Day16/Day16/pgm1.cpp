#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int a[100];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
	int min = 0;
	int max = 0;
    for (int i = 1;i < a[i];i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        else  
        {
            min = a[i];
        }
    }
    cout << "min:" << min;
    cout << "max:" << max;
}