#include<iostream>
using namespace std;
int main()
{
    int n, i, temp;;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int a[100];
    cout << "Enter elements of array:" << endl;
    for ( i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            if (a[j] < a[j + 1])
            {
            temp = a[j + 1];
            a[j + 1] = a[j];
            a[j] = temp;

            }
        }
    }
    for (i = 0; i < n; ++i) {
        cout<<a[i];
        
    }cout << "seecond smallest:" << a[n - 2];
   
    
}